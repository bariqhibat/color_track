# -*- coding: utf-8 -*-

import numpy as np
import cv2
import sys

def showColor(a):
    # Convert to greyscale
    img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    # img_gray = cv2.convertScaleAbs(img_gray)
    # Convert to binary image by thresholding
    _, threshold = cv2.threshold(img_gray, 245, 255, cv2.THRESH_BINARY_INV)
    # Find the contours
    _ , contours, _ = cv2.findContours(threshold, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    # contours = np.array(contours)[:,1:]
    # For each contour approximate the curve and
    # detect the shapes.
    for cnt in contours:
        epsilon = 0.01*cv2.arcLength(cnt, True)
        approx = cv2.approxPolyDP(cnt, epsilon, True)
        cv2.drawContours(img, [approx], 0, (0), 3)
        # Position for writing text
        x,y = approx[0][0]

        if len(approx) == 3:
            cv2.putText(img, "Red", (x, y), cv2.FONT_HERSHEY_COMPLEX, 1, 0,2)
        elif len(approx) == 4:
            cv2.putText(img, "Yellow", (x, y), cv2.FONT_HERSHEY_COMPLEX, 1, 0,2)
        elif len(approx) == 5:
            cv2.putText(img, "Green", (x, y), cv2.FONT_HERSHEY_COMPLEX, 1, 0,2)
        elif 6 < len(approx) < 15:
            cv2.putText(img, "Blue", (x, y), cv2.FONT_HERSHEY_COMPLEX, 1, 0,2)
        else:
            cv2.putText(img, "Orange", (x, y), cv2.FONT_HERSHEY_COMPLEX, 1, 0,2)
    cv2.imshow("final", img)
    cv2.waitKey(0)

cam = cv2.VideoCapture(0)

while(True):

    tf, img = cam.read()

    kernel = np.ones((5,5),np.uint8)
    erosion = cv2.erode(img,kernel,iterations = 1)

    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

    lower_range = np.array([169, 100, 100], dtype=np.uint8)
    upper_range = np.array([189, 255, 255], dtype=np.uint8)

    # Red color
    low_red = np.array([161, 155, 84])
    high_red = np.array([179, 255, 255])
    red_mask = cv2.inRange(hsv, low_red, high_red)
    result = cv2.bitwise_and(img, img, mask=red_mask)

    # Blue color
    low_blue = np.array([94, 80, 2])
    high_blue = np.array([126, 255, 255])
    blue_mask = cv2.inRange(hsv, low_blue, high_blue)
    blue = cv2.bitwise_and(img, img, mask=blue_mask)

    # Green color
    low_green = np.array([25, 52, 72])
    high_green = np.array([102, 255, 255])
    green_mask = cv2.inRange(hsv, low_green, high_green)
    green = cv2.bitwise_and(img, img, mask=green_mask)

    # # Every color except white
    # low = np.array([0, 42, 0])
    # high = np.array([179, 255, 255])
    # mask = cv2.inRange(hsv, low, high)
    # result = cv2.bitwise_and(img, img, mask=mask)

    # Orange
    low = np.array([8, 150, 20])
    high = np.array([25, 255, 255])
    mask = cv2.inRange(hsv, low, high)
    orange = cv2.bitwise_and(img, img, mask=mask)

    # Yellow
    low = np.array([25, 50, 20])
    high = np.array([35, 255, 255])
    mask = cv2.inRange(hsv, low, high)
    # result = cv2.bitwise_and(img, img, mask=mask)

    # cv2.imshow("Frame", img)
    # cv2.imshow("Red", red)
    # cv2.imshow("Blue", blue)
    # cv2.imshow("Green", green)
    # cv2.imshow("Result", result)
    # cv2.imshow('video',img)

    result = cv2.morphologyEx(result, cv2.MORPH_OPEN, kernel)
    result = cv2.morphologyEx(result, cv2.MORPH_CLOSE, kernel)

    # epsilon = 0.1*cv2.arcLength(result,True)
    # approx = cv2.approxPolyDP(result,epsilon,True)

    cv2.imshow('video',result)


    mask = cv2.inRange(hsv, lower_range, upper_range)
    key = cv2.waitKey(1)
    if key == 27:
        break

cam.release()
cv2.destroyAllWindows()

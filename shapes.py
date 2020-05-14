import cv2
import numpy as np
# cam = cv2.VideoCapture('rubick.mp4')
cam = cv2.VideoCapture('Rubick.mp4')
kernel = np.ones((5,5),np.uint8)

def clean(a):
    a = cv2.morphologyEx(a, cv2.MORPH_OPEN, kernel)
    a = cv2.morphologyEx(a, cv2.MORPH_CLOSE, kernel)
    return a

while True:
    tf, img = cam.read()

    copy_img = img
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

    # Red color
    low_red = np.array([161, 120, 84])
    high_red = np.array([179, 255, 255])
    red = cv2.inRange(hsv, low_red, high_red)
    red = clean(red)

    # Blue color
    low_blue = np.array([94, 100, 20])
    high_blue = np.array([126, 255, 255])
    blue = cv2.inRange(hsv, low_blue, high_blue)
    blue = clean(blue)


    # Green color
    low_green = np.array([40, 152, 72])
    high_green = np.array([78, 255, 255])
    green = cv2.inRange(hsv, low_green, high_green)
    green = clean(green)

    # Yellow color
    low = np.array([25, 130, 20])
    high = np.array([35, 255, 255])
    yellow = cv2.inRange(hsv, low, high)
    yellow = clean(yellow)


    # Orange
    low = np.array([10, 200, 20])
    high = np.array([17, 255, 255])
    orange = cv2.inRange(hsv, low, high)
    orange = clean(orange)

    # masks = {'red':red,'blue':blue,'green':green,'yellow':yellow,'orange':orange}
    # print(masks['red'])
    _ , red_contours, _ = cv2.findContours(red, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    _ , blue_contours, _ = cv2.findContours(blue, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    _ , green_contours, _ = cv2.findContours(green, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    _ , yellow_contours, _ = cv2.findContours(yellow, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    _ , orange_contours, _ = cv2.findContours(orange, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    for contour in red_contours:
        epsilon = 0.01*cv2.arcLength(contour, True)
        approx = cv2.approxPolyDP(contour, epsilon, True)

        cv2.drawContours(img,[approx], -1, (0,0,255), 1)
        x,y = approx[0][0]
        cv2.putText(img, "Red", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (0,0,255),1)
    for contour in blue_contours:
        epsilon = 0.01*cv2.arcLength(contour, True)
        approx = cv2.approxPolyDP(contour, epsilon, True)
        cv2.drawContours(img,[approx], -1, (255,0,0), 1)
        x,y = approx[0][0]
        cv2.putText(img, "Blue", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (255,0,0),1)
    for contour in green_contours:
        epsilon = 0.01*cv2.arcLength(contour, True)
        approx = cv2.approxPolyDP(contour, epsilon, True)
        cv2.drawContours(img,[approx], -1, (0,255,0), 1)
        x,y = approx[0][0]
        cv2.putText(img, "Green", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (0,255,0),1)
    for contour in yellow_contours:
        epsilon = 0.01*cv2.arcLength(contour, True)
        approx = cv2.approxPolyDP(contour, epsilon, True)
        cv2.drawContours(img,[approx], -1, (6,248,255), 1)
        x,y = approx[0][0]
        cv2.putText(img, "Yellow", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (6,248,255),1)
    for contour in orange_contours:
        epsilon = 0.01*cv2.arcLength(contour, True)
        approx = cv2.approxPolyDP(contour, epsilon, True)
        cv2.drawContours(img,[approx], -1, (6,131,255), 1)
        x,y = approx[0][0]
        cv2.putText(img, "Orange", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (6,131,255),1)


    # for i,mask in enumerate(masks):
    #     # mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
    #     # mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
    #     if i == 1:
    #
    #     mask = clean(mask)
    #     _ , contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    #     # print(mask)
    #     if i == 1:
    #         for contour in contours:
    #             epsilon = 0.01*cv2.arcLength(contour, True)
    #             approx = cv2.approxPolyDP(contour, epsilon, True)
    #             cv2.drawContours(img,[approx], -1, (0,0,255), 1)
    #             x,y = approx[0][0]
    #             cv2.putText(img, "Red", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (0,0,255),1)
    #     elif i == 2:
    #         for contour in contours:
    #             epsilon = 0.01*cv2.arcLength(contour, True)
    #             approx = cv2.approxPolyDP(contour, epsilon, True)
    #             cv2.drawContours(img,[approx], -1, (255,0,0), 1)
    #             x,y = approx[0][0]
    #             cv2.putText(img, "Blue", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (255,0,0),1)
    #     elif i ==3:
    #         for contour in contours:
    #             epsilon = 0.01*cv2.arcLength(contour, True)
    #             approx = cv2.approxPolyDP(contour, epsilon, True)
    #             cv2.drawContours(img,[approx], -1, (0,255,0), 1)
    #             x,y = approx[0][0]
    #             cv2.putText(img, "Green", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (0,255,0),1)
    #     elif i ==4:
    #         for contour in contours:
    #             epsilon = 0.01*cv2.arcLength(contour, True)
    #             approx = cv2.approxPolyDP(contour, epsilon, True)
    #             cv2.drawContours(img,[approx], -1, (6,248,255), 1)
    #             x,y = approx[0][0]
    #             cv2.putText(img, "Yellow", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (6,248,255),1)
    #     else:
    #         for contour in contours:
    #             epsilon = 0.01*cv2.arcLength(contour, True)
    #             approx = cv2.approxPolyDP(contour, epsilon, True)
    #             cv2.drawContours(img,[approx], -1, (6,131,255), 1)
    #             x,y = approx[0][0]
    #             cv2.putText(img, "Orange", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.5, (6,131,255),1)
    cv2.imshow('contour',img)
    # cv2.imshow('red',red)
    # cv2.imshow('blue',blue)
    # cv2.imshow('green',green)
    # cv2.imshow('yellow',yellow)
    # cv2.imshow('orange',orange)
    key = cv2.waitKey(200)
    if key == 27:
        break

cam.release()
cv2.destroyAllWindows()

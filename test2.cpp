<sdf version='1.6'>
  <world name='default'>
    <plugin name="hello" filename="libhello.so"/>
    <light name='sun' type='directional'>
      <cast_shadows>1</cast_shadows>
      <pose frame=''>0 0 10 0 -0 0</pose>
      <diffuse>0.8 0.8 0.8 1</diffuse>
      <specular>0.2 0.2 0.2 1</specular>
      <attenuation>
        <range>1000</range>
        <constant>0.9</constant>
        <linear>0.01</linear>
        <quadratic>0.001</quadratic>
      </attenuation>
      <direction>-0.5 0.1 -0.9</direction>
    </light>
    <model name='ground_plane'>
      <static>1</static>
      <link name='link'>
        <collision name='collision'>
          <geometry>
            <plane>
              <normal>0 0 1</normal>
              <size>100 100</size>
            </plane>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>100</mu>
                <mu2>50</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual'>
          <cast_shadows>0</cast_shadows>
          <geometry>
            <plane>
              <normal>0 0 1</normal>
              <size>100 100</size>
            </plane>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
    </model>
    <gravity>0 0 -9.8</gravity>
    <magnetic_field>6e-06 2.3e-05 -4.2e-05</magnetic_field>
    <atmosphere type='adiabatic'/>
    <physics name='default_physics' default='0' type='ode'>
      <max_step_size>0.001</max_step_size>
      <real_time_factor>1</real_time_factor>
      <real_time_update_rate>1000</real_time_update_rate>
    </physics>
    <scene>
      <ambient>0.4 0.4 0.4 1</ambient>
      <background>0.7 0.7 0.7 1</background>
      <shadows>1</shadows>
    </scene>
    <spherical_coordinates>
      <surface_model>EARTH_WGS84</surface_model>
      <latitude_deg>0</latitude_deg>
      <longitude_deg>0</longitude_deg>
      <elevation>0</elevation>
      <heading_deg>0</heading_deg>
    </spherical_coordinates>
    <model name='HumanoidRobot'>
      <link name='link_1'>
        <pose frame=''>0.010779 0.5 -0.738095 0 -0 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <gravity>1</gravity>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_1_clone'>
        <pose frame=''>0.010779 -0.5 -0.738095 0 -0 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2'>
        <pose frame=''>0.010779 0.5 -0.285082 0 0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <gravity>1</gravity>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2_clone'>
        <pose frame=''>0.009081 0.5 0.528002 0 -0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2_clone_0'>
        <pose frame=''>0.010779 -0.5 -0.288095 0 0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2_clone_clone'>
        <pose frame=''>0.009081 -0.5 0.524989 0 -0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_3'>
        <pose frame=''>-0.061278 0 0.996374 0 -0 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <gravity>1</gravity>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.75 1.5 0.1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.75 1.5 0.1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <joint name='link_1_JOINT_0' type='revolute'>
        <parent>link_1</parent>
        <child>link_2</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
            <friction>0</friction>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_1_clone_JOINT_2' type='revolute'>
        <parent>link_1_clone</parent>
        <child>link_2_clone_0</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_JOINT_1' type='revolute'>
        <parent>link_2</parent>
        <child>link_2_clone</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_clone_0_JOINT_3' type='revolute'>
        <parent>link_2_clone_0</parent>
        <child>link_2_clone_clone</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_clone_JOINT_5' type='revolute'>
        <parent>link_2_clone</parent>
        <child>link_3</child>
        <pose frame=''>-0 0 0 0 -0 0</pose>
        <axis>
          <xyz>1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_clone_clone_JOINT_6' type='revolute'>
        <parent>link_2_clone_clone</parent>
        <child>link_3</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <static>0</static>
      <allow_auto_disable>1</allow_auto_disable>
      <pose frame=''>-0.010779 0 0.788095 0 -0 0</pose>
    </model>
    <state world_name='default'>
      <sim_time>23 41000000</sim_time>
      <real_time>23 170513692</real_time>
      <wall_time>1589179857 366268289</wall_time>
      <iterations>23041</iterations>
      <model name='Building2'>
        <pose frame=''>-12.0245 -5.62414 0 0 -0 0</pose>
        <scale>1 1 1</scale>
        <link name='Wall_100'>
          <pose frame=''>-28.2969 -27.3232 0 0 -0 3.14159</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_101'>
          <pose frame=''>-32.2454 -24.5232 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_102'>
          <pose frame=''>-36.1469 -21.7232 0 0 -0 3.14159</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_103'>
          <pose frame=''>-39.9553 1.20175 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_105'>
          <pose frame=''>-29.7553 14.3768 0 0 0 -1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_106'>
          <pose frame=''>-13.3303 11.8268 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_107'>
          <pose frame=''>3.0947 14.3768 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_109'>
          <pose frame=''>-18.9376 14.2617 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_111'>
          <pose frame=''>-29.7553 9.15176 0 0 0 -1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_112'>
          <pose frame=''>-13.3303 6.47676 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_113'>
          <pose frame=''>3.0947 9.15176 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_116'>
          <pose frame=''>-4.86613 9.10986 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_118'>
          <pose frame=''>-13.5201 9.10986 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_120'>
          <pose frame=''>-22.2444 9.10986 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_124'>
          <pose frame=''>-28.2885 -21.7232 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_125'>
          <pose frame=''>-24.2385 -24.5232 0 0 0 -1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_127'>
          <pose frame=''>-21.9175 -25.3258 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_128'>
          <pose frame=''>-19.6175 -30.2508 0 0 0 -1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_130'>
          <pose frame=''>2.9525 -32.7 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_133'>
          <pose frame=''>6.2947 -29.8232 0 0 -0 3.14159</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_135'>
          <pose frame=''>8.192 -11.7353 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_136'>
          <pose frame=''>12.117 6.43966 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_138'>
          <pose frame=''>11.9563 9.93426 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_139'>
          <pose frame=''>14.0063 13.3593 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_141'>
          <pose frame=''>5.1602 15.0731 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_142'>
          <pose frame=''>7.2102 19.3731 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_87'>
          <pose frame=''>-34.9303 24.0268 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_91'>
          <pose frame=''>-29.7553 20.4768 0 0 0 -1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_92'>
          <pose frame=''>-13.3303 16.9268 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_93'>
          <pose frame=''>3.0947 20.3518 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_94'>
          <pose frame=''>9.5197 23.7768 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_95'>
          <pose frame=''>15.9447 -3.02325 0 0 0 -1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_96'>
          <pose frame=''>12.8947 -29.8232 0 0 -0 3.14159</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_97'>
          <pose frame=''>9.8447 -32.4982 0 0 0 -1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_98'>
          <pose frame=''>-7.20533 -35.1732 0 0 -0 3.14159</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='Wall_99'>
          <pose frame=''>-24.2553 -31.2482 0 0 -0 1.5708</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='HumanoidRobot'>
        <pose frame=''>-20.6008 -1.41477 1.71204 0 -0 0</pose>
        <scale>1 1 1</scale>
        <link name='link_1'>
          <pose frame=''>-20.5901 -0.914767 0.973949 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_1_clone'>
          <pose frame=''>-20.5901 -1.91477 0.973949 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2'>
          <pose frame=''>-20.5901 -0.914767 1.42696 0 0.523598 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2_clone'>
          <pose frame=''>-20.5918 -0.914767 2.24005 0 -0.523598 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2_clone_0'>
          <pose frame=''>-20.5901 -1.91477 1.42395 0 0.523598 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2_clone_clone'>
          <pose frame=''>-20.5918 -1.91477 2.23703 0 -0.523598 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_3'>
          <pose frame=''>-20.6621 -1.41477 2.70842 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='HumanoidRobot_clone'>
        <pose frame=''>-9.257 -1.48084 1.71204 0 0 -3.13299</pose>
        <scale>1 1 1</scale>
        <link name='link_1'>
          <pose frame=''>-9.26348 -1.98092 0.973945 0 0 -3.13299</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_1_clone'>
          <pose frame=''>-9.27208 -0.980953 0.973945 0 0 -3.13299</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2'>
          <pose frame=''>-9.26348 -1.98092 1.42696 0 0.523598 -3.13299</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2_clone'>
          <pose frame=''>-9.26178 -1.9809 2.24004 0 -0.523598 -3.13299</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2_clone_0'>
          <pose frame=''>-9.27208 -0.980953 1.42395 0 0.523598 -3.13299</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_2_clone_clone'>
          <pose frame=''>-9.27039 -0.980938 2.23703 0 -0.523598 -3.13299</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
        <link name='link_3'>
          <pose frame=''>-9.19573 -1.48031 2.70841 0 0 -3.13299</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf'>
        <pose frame=''>-39.8478 -13.509 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.8478 -13.509 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone'>
        <pose frame=''>-39.8667 -14.436 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.8667 -14.436 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_0'>
        <pose frame=''>-39.8907 -15.3778 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.8907 -15.3778 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_1'>
        <pose frame=''>-39.8789 -16.3153 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.8789 -16.3153 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_2'>
        <pose frame=''>-39.8818 -17.2637 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.8818 -17.2637 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_3'>
        <pose frame=''>-39.8706 -18.2001 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.8706 -18.2001 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_4'>
        <pose frame=''>-39.9081 -19.1777 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.9081 -19.1777 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_5'>
        <pose frame=''>-39.9112 -20.1084 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-39.9112 -20.1084 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_5_clone'>
        <pose frame=''>-32.1883 -24.9021 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-32.1883 -24.9021 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_5_clone_0'>
        <pose frame=''>-32.1486 -24.0104 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-32.1486 -24.0104 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_5_clone_clone'>
        <pose frame=''>-24.131 -25.8201 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-24.131 -25.8201 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_5_clone_clone_0'>
        <pose frame=''>-24.1878 -26.7666 0 0 -0 1.53332</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-24.1878 -26.7666 0 0 -0 1.53332</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_5_clone_clone_1'>
        <pose frame=''>-19.7492 -25.9837 0 0 0 -1.56193</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-19.7492 -25.9837 0 0 0 -1.56193</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='bookshelf_clone_5_clone_clone_1_clone'>
        <pose frame=''>-19.7693 -26.8087 0 0 0 -1.56193</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-19.7693 -26.8087 0 0 0 -1.56193</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='ground_plane'>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table'>
        <pose frame=''>-16.0334 -32.79 0 0 0 -1.57976</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-16.0334 -32.79 0 0 0 -1.57976</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone'>
        <pose frame=''>-15.9856 -28.2474 0 0 0 -1.57976</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-15.9856 -28.2474 0 0 0 -1.57976</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_0'>
        <pose frame=''>-10.0644 -28.2662 0 0 0 -1.57976</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-10.0644 -28.2662 0 0 0 -1.57976</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_1'>
        <pose frame=''>-10.1312 -32.786 0 0 0 -1.57976</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-10.1312 -32.786 0 0 0 -1.57976</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_2'>
        <pose frame=''>-3.31186 -28.443 0 0 0 -1.57976</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-3.31186 -28.443 0 0 0 -1.57976</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_3'>
        <pose frame=''>-3.49349 -32.9668 0 0 0 -1.57976</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-3.49349 -32.9668 0 0 0 -1.57976</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_4'>
        <pose frame=''>6.2219 -32.6714 0 0 0 -1.57976</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>6.2219 -32.6714 0 0 0 -1.57976</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5'>
        <pose frame=''>-37.3164 7.64133 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-37.3164 7.64133 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone'>
        <pose frame=''>-37.2503 11.5651 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-37.2503 11.5651 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_0'>
        <pose frame=''>-37.3141 15.2602 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-37.3141 15.2602 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_1'>
        <pose frame=''>-37.0758 19.5027 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-37.0758 19.5027 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2'>
        <pose frame=''>-37.0221 -14.3036 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-37.0221 -14.3036 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone'>
        <pose frame=''>-36.7837 -16.5831 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-36.7837 -16.5831 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0'>
        <pose frame=''>-36.574 -18.7469 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-36.574 -18.7469 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone'>
        <pose frame=''>-26.213 -24.4148 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-26.213 -24.4148 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_0'>
        <pose frame=''>-28.6852 -26.15 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-28.6852 -26.15 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_1'>
        <pose frame=''>-26.1454 -26.0956 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-26.1454 -26.0956 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_2'>
        <pose frame=''>-22.8458 -33.087 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-22.8458 -33.087 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_3'>
        <pose frame=''>-20.8664 -33.0301 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-20.8664 -33.0301 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_4'>
        <pose frame=''>-20.9273 -31.791 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-20.9273 -31.791 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_5'>
        <pose frame=''>-20.9221 -30.2709 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-20.9221 -30.2709 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_6'>
        <pose frame=''>-20.8972 -28.9821 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-20.8972 -28.9821 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_7'>
        <pose frame=''>-22.788 -31.8267 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-22.788 -31.8267 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_8'>
        <pose frame=''>-22.829 -30.2388 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-22.829 -30.2388 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_0_clone_9'>
        <pose frame=''>-22.776 -28.9794 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-22.776 -28.9794 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_1'>
        <pose frame=''>-34.3401 -14.5694 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-34.3401 -14.5694 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_2'>
        <pose frame=''>-34.1418 -16.5383 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-34.1418 -16.5383 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_3'>
        <pose frame=''>-34.0327 -18.8569 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-34.0327 -18.8569 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <model name='table_clone_5_clone_2_clone_4'>
        <pose frame=''>-28.734 -24.488 0 0 0 -3.114</pose>
        <scale>1 1 1</scale>
        <link name='link'>
          <pose frame=''>-28.734 -24.488 0 0 0 -3.114</pose>
          <velocity>0 0 0 0 -0 0</velocity>
          <acceleration>0 0 0 0 -0 0</acceleration>
          <wrench>0 0 0 0 -0 0</wrench>
        </link>
      </model>
      <light name='sun'>
        <pose frame=''>0 0 10 0 -0 0</pose>
      </light>
    </state>
    <model name='Building2'>
      <pose frame=''>-12.0245 -5.62414 0 0 -0 0</pose>
      <link name='Wall_100'>
        <collision name='Wall_100_Collision'>
          <geometry>
            <box>
              <size>8.23315 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_100_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>8.23315 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-16.2724 -21.6991 0 0 -0 3.14159</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_101'>
        <collision name='Wall_101_Collision'>
          <geometry>
            <box>
              <size>5.75 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_101_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.75 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-20.2209 -18.8991 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_102'>
        <collision name='Wall_102_Collision'>
          <geometry>
            <box>
              <size>7.76685 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_102_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>7.76685 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-24.1224 -16.0991 0 0 -0 3.14159</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_103'>
        <collision name='Wall_103_Collision'>
          <geometry>
            <box>
              <size>46 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_103_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>46 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-27.9308 6.82589 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_105'>
        <collision name='Wall_105_Collision'>
          <geometry>
            <box>
              <size>5.25 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_105_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.25 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-17.7308 20.0009 0 0 0 -1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_106'>
        <collision name='Wall_106_Collision'>
          <geometry>
            <box>
              <size>33 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_106_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>33 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-1.30583 17.4509 0 0 -0 0</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_107'>
        <pose frame=''>15.1192 20.0009 0 0 -0 1.5708</pose>
        <visual name='Wall_107_Visual_0'>
          <pose frame=''>-1.98924 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.27152 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_107_Collision_0'>
          <geometry>
            <box>
              <size>1.27152 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-1.98924 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_107_Visual_1'>
          <pose frame=''>1.08576 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>3.07848 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_107_Collision_1'>
          <geometry>
            <box>
              <size>3.07848 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>1.08576 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_107_Visual_2'>
          <pose frame=''>-0.903477 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_107_Collision_2'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>-0.903477 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_109'>
        <collision name='Wall_109_Collision'>
          <geometry>
            <box>
              <size>5.25 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_109_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.25 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-6.91313 19.8858 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_111'>
        <collision name='Wall_111_Collision'>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_111_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-17.7308 14.7759 0 0 0 -1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_112'>
        <pose frame=''>-1.30583 12.1009 0 0 -0 0</pose>
        <visual name='Wall_112_Visual_0'>
          <pose frame=''>-13.571 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.8581 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_0'>
          <geometry>
            <box>
              <size>5.8581 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-13.571 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_1'>
          <pose frame=''>-8.87439 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.73501 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_1'>
          <geometry>
            <box>
              <size>1.73501 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-8.87439 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_2'>
          <pose frame=''>-0.216496 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>13.7808 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_2'>
          <geometry>
            <box>
              <size>13.7808 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-0.216496 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_3'>
          <pose frame=''>8.53551 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.92323 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_3'>
          <geometry>
            <box>
              <size>1.92323 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>8.53551 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_4'>
          <pose frame=''>13.4486 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>6.10288 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_4'>
          <geometry>
            <box>
              <size>6.10288 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>13.4486 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_5'>
          <pose frame=''>-10.1919 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_5'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>-10.1919 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_6'>
          <pose frame=''>-7.55689 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_6'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>-7.55689 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_7'>
          <pose frame=''>7.1239 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_7'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>7.1239 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_112_Visual_8'>
          <pose frame=''>9.94712 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_112_Collision_8'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>9.94712 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_113'>
        <collision name='Wall_113_Collision'>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_113_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>15.1192 14.7759 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_116'>
        <collision name='Wall_116_Collision'>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_116_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>7.15837 14.734 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_118'>
        <collision name='Wall_118_Collision'>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_118_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-1.4956 14.734 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_120'>
        <collision name='Wall_120_Collision'>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_120_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-10.2199 14.734 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_124'>
        <collision name='Wall_124_Collision'>
          <geometry>
            <box>
              <size>8.25 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_124_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>8.25 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-16.264 -16.0991 0 0 -0 0</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_125'>
        <pose frame=''>-12.214 -18.8991 0 0 0 -1.5708</pose>
        <visual name='Wall_125_Visual_0'>
          <pose frame=''>-2.30978 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.13044 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_125_Collision_0'>
          <geometry>
            <box>
              <size>1.13044 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-2.30978 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_125_Visual_1'>
          <pose frame=''>1.01522 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>3.71956 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_125_Collision_1'>
          <geometry>
            <box>
              <size>3.71956 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>1.01522 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_125_Visual_2'>
          <pose frame=''>-1.29456 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_125_Collision_2'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>-1.29456 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_127'>
        <pose frame=''>-9.89301 -19.7017 0 0 -0 0</pose>
        <visual name='Wall_127_Visual_0'>
          <pose frame=''>-1.27379 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>2.20243 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_127_Collision_0'>
          <geometry>
            <box>
              <size>2.20243 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-1.27379 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_127_Visual_1'>
          <pose frame=''>1.55121 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.64757 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_127_Collision_1'>
          <geometry>
            <box>
              <size>1.64757 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>1.55121 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_127_Visual_2'>
          <pose frame=''>0.277428 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_127_Collision_2'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>0.277428 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_128'>
        <collision name='Wall_128_Collision'>
          <geometry>
            <box>
              <size>10 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_128_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>10 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 0.764706 0.305882 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-7.59301 -24.6267 0 0 0 -1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_130'>
        <collision name='Wall_130_Collision'>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_130_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>14.977 -27.0759 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_133'>
        <pose frame=''>18.3192 -24.1991 0 0 -0 3.14159</pose>
        <visual name='Wall_133_Visual_0'>
          <pose frame=''>-1.90394 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>3.44212 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_133_Collision_0'>
          <geometry>
            <box>
              <size>3.44212 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-1.90394 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_133_Visual_1'>
          <pose frame=''>2.17106 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>2.90788 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_133_Collision_1'>
          <geometry>
            <box>
              <size>2.90788 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>2.17106 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_133_Visual_2'>
          <pose frame=''>0.267118 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_133_Collision_2'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>0.267118 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_135'>
        <pose frame=''>20.2165 -6.11119 0 0 -0 1.5708</pose>
        <visual name='Wall_135_Visual_0'>
          <pose frame=''>-17.4023 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.69537 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_135_Collision_0'>
          <geometry>
            <box>
              <size>1.69537 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-17.4023 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_135_Visual_1'>
          <pose frame=''>-1.51796 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>28.2734 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_135_Collision_1'>
          <geometry>
            <box>
              <size>28.2734 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-1.51796 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_135_Visual_2'>
          <pose frame=''>15.8844 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>4.73128 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_135_Collision_2'>
          <geometry>
            <box>
              <size>4.73128 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>15.8844 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_135_Visual_3'>
          <pose frame=''>-16.1046 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_135_Collision_3'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>-16.1046 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_135_Visual_4'>
          <pose frame=''>13.0687 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_135_Collision_4'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>13.0687 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_136'>
        <collision name='Wall_136_Collision'>
          <geometry>
            <box>
              <size>8 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_136_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>8 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>24.1415 12.0638 0 0 -0 0</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_138'>
        <pose frame=''>23.9808 15.5584 0 0 -0 1.5708</pose>
        <visual name='Wall_138_Visual_0'>
          <pose frame=''>-1.47597 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>4.04806 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_138_Collision_0'>
          <geometry>
            <box>
              <size>4.04806 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-1.47597 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_138_Visual_1'>
          <pose frame=''>2.47403 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>2.05194 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_138_Collision_1'>
          <geometry>
            <box>
              <size>2.05194 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>2.47403 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_138_Visual_2'>
          <pose frame=''>0.998056 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_138_Collision_2'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>0.998056 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_139'>
        <collision name='Wall_139_Collision'>
          <geometry>
            <box>
              <size>4.25 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_139_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>4.25 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.996078 0.47451 0.0196078 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>26.0308 18.9834 0 0 -0 0</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_141'>
        <pose frame=''>17.1847 20.6972 0 0 -0 0</pose>
        <visual name='Wall_141_Visual_0'>
          <pose frame=''>-1.0891 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>2.0718 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 1 1 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_141_Collision_0'>
          <geometry>
            <box>
              <size>2.0718 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>-1.0891 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_141_Visual_1'>
          <pose frame=''>1.4859 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.2782 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 1 1 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_141_Collision_1'>
          <geometry>
            <box>
              <size>1.2782 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>1.4859 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_141_Visual_2'>
          <pose frame=''>0.396797 0 2.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 1 1 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <collision name='Wall_141_Collision_2'>
          <geometry>
            <box>
              <size>0.9 0.15 0.5</size>
            </box>
          </geometry>
          <pose frame=''>0.396797 0 2.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_142'>
        <collision name='Wall_142_Collision'>
          <geometry>
            <box>
              <size>8.75 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_142_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>8.75 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.435294 0.796078 0.67451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>19.2347 24.9972 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_87'>
        <collision name='Wall_87_Collision'>
          <geometry>
            <box>
              <size>10.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_87_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>10.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-22.9058 29.6509 0 0 -0 0</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_91'>
        <collision name='Wall_91_Collision'>
          <geometry>
            <box>
              <size>7.25 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_91_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>7.25 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-17.7308 26.1009 0 0 0 -1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_92'>
        <collision name='Wall_92_Collision'>
          <geometry>
            <box>
              <size>33 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_92_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>33 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-1.30583 22.5509 0 0 -0 0</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_93'>
        <collision name='Wall_93_Collision'>
          <geometry>
            <box>
              <size>7 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_93_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>7 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>15.1192 25.9759 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_94'>
        <collision name='Wall_94_Collision'>
          <geometry>
            <box>
              <size>13 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_94_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>13 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>1 1 1 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>21.5442 29.4009 0 0 -0 0</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_95'>
        <collision name='Wall_95_Collision'>
          <geometry>
            <box>
              <size>53.75 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_95_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>53.75 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>27.9692 2.60089 0 0 0 -1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_96'>
        <collision name='Wall_96_Collision'>
          <geometry>
            <box>
              <size>6.25 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_96_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>6.25 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>24.9192 -24.1991 0 0 -0 3.14159</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_97'>
        <collision name='Wall_97_Collision'>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_97_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>5.5 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>21.8692 -26.8741 0 0 0 -1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_98'>
        <collision name='Wall_98_Collision'>
          <geometry>
            <box>
              <size>34.25 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_98_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>34.25 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>4.81917 -29.5491 0 0 -0 3.14159</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <link name='Wall_99'>
        <collision name='Wall_99_Collision'>
          <geometry>
            <box>
              <size>8 0.15 2.5</size>
            </box>
          </geometry>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='Wall_99_Visual'>
          <pose frame=''>0 0 1.25 0 -0 0</pose>
          <geometry>
            <box>
              <size>8 0.15 2.5</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.760784 0.662745 0.627451 1</ambient>
          </material>
          <meta>
            <layer>0</layer>
          </meta>
        </visual>
        <pose frame=''>-12.2308 -25.6241 0 0 -0 1.5708</pose>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <static>1</static>
    </model>
    <model name='HumanoidRobot_clone'>
      <link name='link_1'>
        <pose frame=''>0.010779 0.5 -0.738095 0 -0 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <gravity>1</gravity>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_1_clone'>
        <pose frame=''>0.010779 -0.5 -0.738095 0 -0 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>1 0.5 0.1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2'>
        <pose frame=''>0.010779 0.5 -0.285082 0 0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <gravity>1</gravity>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2_clone'>
        <pose frame=''>0.009081 0.5 0.528002 0 -0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2_clone_0'>
        <pose frame=''>0.010779 -0.5 -0.288095 0 0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_2_clone_clone'>
        <pose frame=''>0.009081 -0.5 0.524989 0 -0.523598 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <gravity>1</gravity>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.1 0.1 1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <link name='link_3'>
        <pose frame=''>-0.061278 0 0.996374 0 -0 0</pose>
        <inertial>
          <mass>1</mass>
          <inertia>
            <ixx>0.166667</ixx>
            <ixy>0</ixy>
            <ixz>0</ixz>
            <iyy>0.166667</iyy>
            <iyz>0</iyz>
            <izz>0.166667</izz>
          </inertia>
          <pose frame=''>0 0 0 0 -0 0</pose>
        </inertial>
        <gravity>1</gravity>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
        <visual name='visual'>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.75 1.5 0.1</size>
            </box>
          </geometry>
          <material>
            <lighting>1</lighting>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
            <ambient>0.3 0.3 0.3 1</ambient>
            <diffuse>0.7 0.7 0.7 1</diffuse>
            <specular>0.01 0.01 0.01 1</specular>
            <emissive>0 0 0 1</emissive>
            <shader type='vertex'>
              <normal_map>__default__</normal_map>
            </shader>
          </material>
          <transparency>0</transparency>
          <cast_shadows>1</cast_shadows>
        </visual>
        <collision name='collision'>
          <laser_retro>0</laser_retro>
          <max_contacts>10</max_contacts>
          <pose frame=''>0 0 0 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.75 1.5 0.1</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>1</mu>
                <mu2>1</mu2>
                <fdir1>0 0 0</fdir1>
                <slip1>0</slip1>
                <slip2>0</slip2>
              </ode>
              <torsional>
                <coefficient>1</coefficient>
                <patch_radius>0</patch_radius>
                <surface_radius>0</surface_radius>
                <use_patch_radius>1</use_patch_radius>
                <ode>
                  <slip>0</slip>
                </ode>
              </torsional>
            </friction>
            <bounce>
              <restitution_coefficient>0</restitution_coefficient>
              <threshold>1e+06</threshold>
            </bounce>
            <contact>
              <collide_without_contact>0</collide_without_contact>
              <collide_without_contact_bitmask>1</collide_without_contact_bitmask>
              <collide_bitmask>1</collide_bitmask>
              <ode>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
                <max_vel>0.01</max_vel>
                <min_depth>0</min_depth>
              </ode>
              <bullet>
                <split_impulse>1</split_impulse>
                <split_impulse_penetration_threshold>-0.01</split_impulse_penetration_threshold>
                <soft_cfm>0</soft_cfm>
                <soft_erp>0.2</soft_erp>
                <kp>1e+13</kp>
                <kd>1</kd>
              </bullet>
            </contact>
          </surface>
        </collision>
      </link>
      <joint name='link_1_JOINT_0' type='revolute'>
        <parent>link_1</parent>
        <child>link_2</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
            <friction>0</friction>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_1_clone_JOINT_2' type='revolute'>
        <parent>link_1_clone</parent>
        <child>link_2_clone_0</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_JOINT_1' type='revolute'>
        <parent>link_2</parent>
        <child>link_2_clone</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_clone_0_JOINT_3' type='revolute'>
        <parent>link_2_clone_0</parent>
        <child>link_2_clone_clone</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>-1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_clone_JOINT_5' type='revolute'>
        <parent>link_2_clone</parent>
        <child>link_3</child>
        <pose frame=''>-0 0 0 0 -0 0</pose>
        <axis>
          <xyz>1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <joint name='link_2_clone_clone_JOINT_6' type='revolute'>
        <parent>link_2_clone_clone</parent>
        <child>link_3</child>
        <pose frame=''>0 0 0 0 -0 0</pose>
        <axis>
          <xyz>1 0 0</xyz>
          <use_parent_model_frame>0</use_parent_model_frame>
          <limit>
            <lower>-1.79769e+308</lower>
            <upper>1.79769e+308</upper>
            <effort>-1</effort>
            <velocity>-1</velocity>
          </limit>
          <dynamics>
            <spring_reference>0</spring_reference>
            <spring_stiffness>0</spring_stiffness>
            <damping>0</damping>
          </dynamics>
        </axis>
        <physics>
          <ode>
            <limit>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </limit>
            <suspension>
              <cfm>0</cfm>
              <erp>0.2</erp>
            </suspension>
          </ode>
        </physics>
      </joint>
      <static>0</static>
      <allow_auto_disable>1</allow_auto_disable>
      <pose frame=''>-9.24071 -1.79846 1.71204 0 -0 0</pose>
    </model>
    <model name='table'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-16.0334 -32.79 0 0 -0 0</pose>
    </model>
    <model name='table_clone'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-15.9856 -28.2474 0 0 0 -1.57976</pose>
    </model>
    <model name='table_clone_0'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-12.9434 -28.2404 0 0 0 -1.57976</pose>
    </model>
    <model name='table_clone_1'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-13.1039 -32.7607 0 0 0 -1.57976</pose>
    </model>
    <model name='table_clone_2'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-10.0147 -28.3829 0 0 0 -1.57976</pose>
    </model>
    <model name='table_clone_3'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-10.2638 -32.9061 0 0 0 -1.57976</pose>
    </model>
    <model name='table_clone_4'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>6.2219 -32.6714 0 0 0 -1.57976</pose>
    </model>
    <model name='table_clone_5'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-37.3164 7.64133 0 0 0 -1.57976</pose>
    </model>
    <model name='table_clone_5_clone'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-37.3989 11.561 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_0'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-37.4963 15.2552 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_1'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-37.2926 19.4604 0 0 0 -3.114</pose>
    </model>
    <model name='bookshelf'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-38.9286 -13.5435 0 0 -0 0</pose>
    </model>
    <model name='bookshelf_clone'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-39.8667 -14.436 -0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_0'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-39.8907 -15.3778 -0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_1'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-39.8789 -16.3153 -0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_2'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-39.8818 -17.2637 -0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_3'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-39.8706 -18.2001 -0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_4'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-39.9081 -19.1777 -0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_5'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-39.9112 -20.1084 -0 0 -0 1.53332</pose>
    </model>
    <model name='table_clone_5_clone_2'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-37.0221 -14.3036 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-36.7837 -16.5831 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-36.574 -18.7469 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_1'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-34.3401 -14.5694 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_2'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-34.1418 -16.5383 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_3'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-34.0327 -18.8569 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_4'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-28.734 -24.488 0 0 0 -3.114</pose>
    </model>
    <model name='bookshelf_clone_5_clone'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-32.1883 -24.9021 0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_5_clone_0'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-32.1486 -24.0104 0 0 -0 1.53332</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-26.213 -24.4148 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_0'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-28.6852 -26.15 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_1'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-26.1454 -26.0956 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_2'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-22.8458 -33.087 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_3'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-20.8664 -33.0301 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_4'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-20.9273 -31.791 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_5'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-20.9221 -30.2709 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_6'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-20.8972 -28.9821 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_7'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-22.788 -31.8267 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_8'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-22.829 -30.2388 0 0 0 -3.114</pose>
    </model>
    <model name='table_clone_5_clone_2_clone_0_clone_9'>
      <static>1</static>
      <link name='link'>
        <collision name='surface'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <surface>
            <friction>
              <ode>
                <mu>0.6</mu>
                <mu2>0.6</mu2>
              </ode>
              <torsional>
                <ode/>
              </torsional>
            </friction>
            <contact>
              <ode/>
            </contact>
            <bounce/>
          </surface>
          <max_contacts>10</max_contacts>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0 1 0 -0 0</pose>
          <geometry>
            <box>
              <size>1.5 0.8 0.03</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_left_leg'>
          <pose frame=''>0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='front_right_leg'>
          <pose frame=''>0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_right_leg'>
          <pose frame=''>-0.68 -0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <collision name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='back_left_leg'>
          <pose frame=''>-0.68 0.38 0.5 0 -0 0</pose>
          <geometry>
            <cylinder>
              <radius>0.02</radius>
              <length>1</length>
            </cylinder>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Grey</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-22.776 -28.9794 0 0 0 -3.114</pose>
    </model>
    <model name='bookshelf_clone_5_clone_clone'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-24.131 -25.8201 0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_5_clone_clone_0'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-24.1878 -26.7666 0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_5_clone_clone_1'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-20.1501 -25.9873 0 0 -0 1.53332</pose>
    </model>
    <model name='bookshelf_clone_5_clone_clone_1_clone'>
      <static>1</static>
      <link name='link'>
        <inertial>
          <mass>1</mass>
        </inertial>
        <collision name='back'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual1'>
          <pose frame=''>0 0.005 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.9 0.01 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='left_side'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual2'>
          <pose frame=''>0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='right_side'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual3'>
          <pose frame=''>-0.45 -0.195 0.6 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.02 0.4 1.2</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='bottom'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual4'>
          <pose frame=''>0 -0.195 0.03 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.06</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='top'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual5'>
          <pose frame=''>0 -0.195 1.19 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='low_shelf'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual6'>
          <pose frame=''>0 -0.195 0.43 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <collision name='high_shelf'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <max_contacts>10</max_contacts>
          <surface>
            <contact>
              <ode/>
            </contact>
            <bounce/>
            <friction>
              <torsional>
                <ode/>
              </torsional>
              <ode/>
            </friction>
          </surface>
        </collision>
        <visual name='visual7'>
          <pose frame=''>0 -0.195 0.8 0 -0 0</pose>
          <geometry>
            <box>
              <size>0.88 0.4 0.02</size>
            </box>
          </geometry>
          <material>
            <script>
              <uri>file://media/materials/scripts/gazebo.material</uri>
              <name>Gazebo/Wood</name>
            </script>
          </material>
        </visual>
        <self_collide>0</self_collide>
        <kinematic>0</kinematic>
      </link>
      <pose frame=''>-19.7693 -26.8087 0 0 0 -1.56193</pose>
    </model>
    <gui fullscreen='0'>
      <camera name='user_camera'>
        <pose frame=''>32.3234 -81.4246 157.991 0 1.13245 1.86725</pose>
        <view_controller>orbit</view_controller>
        <projection_type>perspective</projection_type>
      </camera>
    </gui>
  </world>
</sdf>

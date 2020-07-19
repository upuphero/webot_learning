#include <webots/motor.h>
#include <webots/robot.h>
#include <stdio.h>

#define TIME_STEP 32



int main(int argc, char **argv) {
  wb_robot_init();
  int i = 0;

  double speed = 1.0;



  WbDeviceTag hand_motors[3];
  hand_motors[0] = wb_robot_get_device("finger_1_joint_1");
  hand_motors[1] = wb_robot_get_device("finger_2_joint_1");
  hand_motors[2] = wb_robot_get_device("finger_middle_joint_1");
  WbDeviceTag ur_motors[1];
  ur_motors[0] = wb_robot_get_device("shoulder_lift_joint");
  
    wb_motor_set_velocity(ur_motors[i], speed);



  while (wb_robot_step(TIME_STEP) != -1) 
    {
    
        printf("Grasping can\n");
        
        for (i = 0; i < 3; ++i)
        {
             wb_motor_set_position(hand_motors[i], 0.65);
        }

        printf("Rotating arm\n");  
        wb_motor_set_position(ur_motors[0], -1.85);  
          
        // printf("Releasing can\n");
        // for (i = 0; i < 3; ++i)
        // {
        //         wb_motor_set_position(hand_motors[i], 0);
        // }
              
        // printf("Rotating arm back\n");     
        // wb_motor_set_position(ur_motors[0], 0.0);


        wb_robot_cleanup();
        return 0;
    }
}

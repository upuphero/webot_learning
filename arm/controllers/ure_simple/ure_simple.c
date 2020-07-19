#include <webots/motor.h>

#include <webots/robot.h>

#include <stdio.h>

#define TIME_STEP 32


int main(int argc, char **argv) {
  wb_robot_init();
  int i = 0;
  double speed = 1.0;

  if (argc == 2)
    sscanf(argv[1], "%lf", &speed);

  WbDeviceTag ur_motors[1];
  ur_motors[0] = wb_robot_get_device("shoulder_lift_joint");

    wb_motor_set_velocity(ur_motors[i], speed);

  while (wb_robot_step(TIME_STEP) != -1) {

    wb_motor_set_position(ur_motors[0],-1.65);


  wb_robot_cleanup();
  return 0;
  }
}

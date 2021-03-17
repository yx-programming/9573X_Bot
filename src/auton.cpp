#include "auton.h"
#include "vex.h"

void driveInches(double inches) {
  double rotations = inches / WHEEL_CIRCUMFERENCE;
  vex::thread left(&leftSpin, (void *)&rotations);
  vex::thread right(&rightSpin, (void *)&rotations);
  right.join();
  vex::this_thread::sleep_for(10);
}

void rotateDegrees(double degrees) {
  double left_rotations =
      (PI * BOT_WIDTH * degrees / 360) / WHEEL_CIRCUMFERENCE;
  double right_rotations = -left_rotations;
  vex::thread left(&leftSpin, (void *)&left_rotations);
  vex::thread right(&rightSpin, (void *)&right_rotations);
  right.join();
  left.join();
  vex::this_thread::sleep_for(10);
}

void leftSpin(void *rotations) {
  left.resetRotation();
  double rots = *(double *)rotations;
  vex::directionType dir;
  if (rots < 0) {
    dir = BWD;
  } else {
    dir = FWD;
  }
  while (fabs(rots) - fabs(left.rotation(ROT)) > 0.05) {
    left.spin(dir, (fabs(rots) - fabs(left.rotation(ROT))) * 100, vPCT);
  }
  left.stop(HOLD);
}

void rightSpin(void *rotations) {
  right.resetRotation();
  double rots = *(double *)rotations;
  vex::directionType dir;
  if (rots < 0) {
    dir = BWD;
  } else {
    dir = FWD;
  }
  while (fabs(rots) - fabs(right.rotation(ROT)) > 0.05) {
    right.spin(dir, (fabs(rots) - fabs(right.rotation(ROT))) * 100, vPCT);
  }
  right.stop(HOLD);
}
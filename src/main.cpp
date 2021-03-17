#include "robotInit.h"
#include "userControl.h"
#include "auton.h"
/*
---------------------
|3        4        5|
|                   |
|2        *        6|
|                   |
|1   R    8        7|
---------------------
*/
void auton() {
  // Setup
  lift.spin(FWD, 100, vPCT);
  intakeGroup.spin(BWD, 100, vPCT);
  vex::this_thread::sleep_for(200);
  intakeGroup.stop();
  lift.stop();

  // Tower 1
  intakeGroup.spin(FWD, 100, vPCT);
  vex::this_thread::sleep_for(1000);
  driveInches(24);
  intakeGroup.stop();
  rotateDegrees(-107);
  lift.spin(FWD, 100, vPCT);
  eject.spin(BWD, 100, vPCT);
  intakeGroup.spin(FWD, 100, vPCT);
  vex::this_thread::sleep_for(1000);
  driveInches(30);
  vex::this_thread::sleep_for(2000);
  lift.stop();
  eject.stop();

  // Tower 2

  // Tower 3

  // Tower 4

  // Tower 5

  // Tower 6

  // Tower 7

  // Tower 8

    /*lift.spin(FWD, 100, vPCT);
  intakeGroup.spin(BWD, 100, vPCT);
  vex::this_thread::sleep_for(200);
  intakeGroup.stop();
  lift.stop();

  intakeGroup.spin(FWD, 100, vPCT);
  driveInches(32);
  rotateDegrees(-107);
  driveInches(37);
  lift.spin(FWD, 100, vPCT);
  eject.spin(BWD, 100, vPCT);
  vex::this_thread::sleep_for(1900);
  intakeGroup.stop();
  vex::this_thread::sleep_for(400);
  lift.stop();
  eject.stop();
  driveInches(-24);
  driveInches(-24);
  rotateDegrees(-110);
  driveInches(41);
  rotateDegrees(80);
  driveInches(29);
  lift.spin(FWD, 100, vPCT);
  eject.spin(BWD, 100, vPCT);
  vex::this_thread::sleep_for(1100);
  lift.stop();
  eject.stop();
  driveInches(-12);
  // Note this is still not persistent
  rotateDegrees(-81);
  driveInches(44);
  rotateDegrees(63);
  intakeGroup.spin(FWD, 100, vPCT);
  driveInches(30);
  lift.spin(FWD, 100, vPCT);
  eject.spin(BWD, 100, vPCT);
  vex::this_thread::sleep_for(1500);
  lift.stop();
  eject.stop();
  intakeGroup.stop();
  driveInches(-12);*/
}

void userControl() {
  vex::thread driveControl(drive);
  vex::thread convControl(conv);
  vex::thread intakeControl(intake);

  while (true) {
    vex::this_thread::sleep_for(10);
  }
}

int main() {
  competition.autonomous(auton);
  competition.drivercontrol(userControl);

  while (true) {
    vex::this_thread::sleep_for(100);
  }
  return 0;
}

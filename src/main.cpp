#include "robotInit.h"
#include "userControl.h"

void auton() {

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

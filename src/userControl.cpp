#include "userControl.h"
#include "robotInit.h"
#include "vexDef.h"

void drive() {
  while (true) {
    right.spin(FWD, (controller.LEFT_JOY_VERT() - controller.RIGHT_JOY_HORIZ()), vPCT);
    left.spin(FWD, (controller.LEFT_JOY_VERT() + controller.RIGHT_JOY_HORIZ()), vPCT);
    right_back.spin(FWD, (controller.LEFT_JOY_VERT() - controller.RIGHT_JOY_HORIZ()), vPCT);
    left_back.spin(FWD, (controller.LEFT_JOY_VERT() + controller.RIGHT_JOY_HORIZ()), vPCT);
  }
}

void conv() {
  while (true) {
    if (controller.ButtonR2.pressing()) {
      eject.spin(FWD, controller.ButtonR1.pressing() * 100, vPCT);
    } else {
      eject.spin(BWD, controller.ButtonR1.pressing() * 100, vPCT);
    }
    lift.spin(FWD, controller.ButtonR1.pressing() * 100, vPCT);
  }
}

void intake() {
  while (true) {
    /*if (controller.ButtonL2.pressing()) {
      leftIntake.spin(FWD, controller.ButtonL1.pressing() * 100, vPCT);
    } else {
      leftIntake.spin(BWD, controller.ButtonL1.pressing() * 100, vPCT);
    }*/
    intakeGroup.spin(FWD, 100 * (controller.ButtonL1.pressing() - controller.ButtonL2.pressing()), vPCT);
  }
}

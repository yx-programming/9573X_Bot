#include "userControl.h"
#include "robotInit.h"
#include "vexDef.h"

void drive() {
  while (true) {
    controller.rumble("");
    right.spin(FWD, (controller.LEFT_JOY_VERT() - controller.RIGHT_JOY_HORIZ()), vPCT);
    left.spin(FWD, (controller.LEFT_JOY_VERT() + controller.RIGHT_JOY_HORIZ()), vPCT);
  }
}

void conv() {
  while (true) {
    rightConv.spin(FWD, controller.ButtonR1.pressing() * 100, vPCT);
    leftConv.spin(FWD, controller.ButtonR1.pressing() * 100, vPCT);
  }
}

void intake() {

}
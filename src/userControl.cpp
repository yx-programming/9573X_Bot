#include "userControl.h"
#include "robotInit.h"
#include "vexDef.h"

void drive() {
  while (true) {
    rightFront.spin(FWD, (controller.LEFT_JOY_VERT() - controller.RIGHT_JOY_HORIZ()), vPCT);
    rightBack.spin(FWD, (controller.LEFT_JOY_VERT() - controller.RIGHT_JOY_HORIZ()), vPCT);
    leftFront.spin(FWD, (controller.LEFT_JOY_VERT() + controller.RIGHT_JOY_HORIZ()), vPCT);
    leftBack.spin(FWD, (controller.LEFT_JOY_VERT() + controller.RIGHT_JOY_HORIZ()), vPCT);
  }
}

void conv() {

}

void intake() {

}
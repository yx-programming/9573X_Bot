#include "robotInit.h"
#include "ports.h"
#include "vexDef.h"

vex::brain brain;

vex::motor rightFront(RIGHT_FRONT, MID_RATIO, true);
vex::motor rightBack(RIGHT_BACK, MID_RATIO, true);
vex::motor leftFront(LEFT_FRONT, MID_RATIO);
vex::motor leftBack(LEFT_BACK, MID_RATIO);

vex::motor rightConv(RIGHT_CONV, MID_RATIO);
vex::motor leftConv(LEFT_CONV, MID_RATIO);

vex::motor rightIntake(RIGHT_INTAKE, MID_RATIO);
vex::motor leftIntake(LEFT_INTAKE, MID_RATIO);

vex::controller controller;
vex::competition competition;
#include "robotInit.h"
#include "ports.h"
#include "vexDef.h"

vex::brain brain;

vex::motor right(RIGHT, MID_RATIO, true);
vex::motor left(LEFT, MID_RATIO);

vex::motor rightConv(RIGHT_CONV, MID_RATIO, true);
vex::motor leftConv(LEFT_CONV, MID_RATIO, true);

vex::motor rightIntake(RIGHT_INTAKE, MID_RATIO);
vex::motor leftIntake(LEFT_INTAKE, MID_RATIO);

vex::controller controller;
vex::competition competition;
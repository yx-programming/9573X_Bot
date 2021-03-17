#include "robotInit.h"
#include "ports.h"
#include "vexDef.h"

vex::brain brain;

vex::motor right_front(RIGHT, MID_RATIO, true);
vex::motor left_front(LEFT, MID_RATIO);
vex::motor right_back(RIGHT_BACK, MID_RATIO, true);
vex::motor left_back(LEFT_BACK, MID_RATIO);

vex::motor_group right(right_front, right_back);
vex::motor_group left(left_front, left_back);

vex::motor lift(CONV, MID_RATIO);
vex::motor eject(EJECT, MID_RATIO, false);

vex::motor rightIntake(RIGHT_INTAKE, MID_RATIO, true);
vex::motor leftIntake(LEFT_INTAKE, MID_RATIO);

vex::motor_group intakeGroup(leftIntake, rightIntake);

vex::controller controller;
vex::competition competition;
#ifndef ROBOT_INIT
#define ROBOT_INIT

#include "vex.h"

extern vex::brain brain;

extern vex::motor right_front;
extern vex::motor left_front;
extern vex::motor left_back;
extern vex::motor right_back;

extern vex::motor_group right;
extern vex::motor_group left;

extern vex::motor lift;
extern vex::motor eject;

extern vex::motor rightIntake;
extern vex::motor leftIntake;

extern vex::motor_group intakeGroup;

extern vex::controller controller;
extern vex::competition competition;


#endif
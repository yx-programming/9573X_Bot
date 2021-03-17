#ifndef AUTON
#define AUTON

#include "robotInit.h"
#include "vexDef.h"

#define PI 3.14159265358
#define WHEEL_DIAMETER 4.0
#define WHEEL_CIRCUMFERENCE (PI * WHEEL_DIAMETER)
#define BOT_WIDTH 19

void driveInches(double inches);

void rotateDegrees(double degrees);

void leftSpin(void* rotations);

void rightSpin(void* rotations);

#endif
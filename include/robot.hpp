#pragma once

#include "main.h"

// Shared hardware objects.
// These are defined exactly once in src/main.cpp and referenced elsewhere via extern.

extern pros::Controller controller;

extern pros::MotorGroup leftMotors;
extern pros::MotorGroup rightMotors;

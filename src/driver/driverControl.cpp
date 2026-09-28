#include "driverControl.hpp"
#include "main.h"
#include "robot.hpp"

void driverControl() {
    while (true) {

		// read controller
		int leftY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
        int rightX = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);      
		
		// controller sensitivity
		rightX = rightX * 0.7;

		// arcade drive: leftY controls forward/backward, rightX controls turning
		int leftPower = leftY + rightX;
		int rightPower = leftY - rightX;

		// move the motors
        leftMotors.move(leftPower);
        rightMotors.move(rightPower);

		// delay to save resources
		pros::delay(20);
	}
}
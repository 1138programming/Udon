#include "main.h"
#include "libIterativeRobot/commands/TestSubsystem/StopTestSubsystem.h"

TestSubsystem::TestSubsystem() {
  // Get TestSubsystem motors
  testMotor = Motor::getMotor(testMotorPort, testSubsystemMotorGearset);

  testMotor->getMotorObject()->set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
}

void TestSubsystem::initDefaultCommand() {
  setDefaultCommand(new StopTestSubsystem());
}

/**
 * Move the TestSubsystem
 * 
 * @param speed - speed of the speed side
 */

void TestSubsystem::move(int speed) {
  testMotor->setSpeed(speed);
  //printf("Motor speed set to %d\n", speed);
}

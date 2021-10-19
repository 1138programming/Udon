#include "libIterativeRobot/commands/Arm/MoveArmDown.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

MoveArmDown::MoveArmDown() {
  requires(Robot::arm);
  this->priority = 2;
}

bool MoveArmDown::canRun() {
  return true; 
}

void MoveArmDown::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("MoveArmDown init\n");
}

void MoveArmDown::execute() {
  Robot::arm->move(-KMaxMotorSpeed);
  printf("Arm position is %d\n", Robot::arm->getSensorValue());
}

bool MoveArmDown::isFinished() {
  return true;
}

void MoveArmDown::end() {
  // Code that runs when isFinished() returns true.
}

void MoveArmDown::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void MoveArmDown::blocked() {
}

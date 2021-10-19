#include "libIterativeRobot/commands/Arm/MoveArmUp.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

MoveArmUp::MoveArmUp() {
  requires(Robot::arm);
  this->priority = 2;
}

bool MoveArmUp::canRun() {
  return true; 
}

void MoveArmUp::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("MoveArmUp init\n");
}

void MoveArmUp::execute() {
  Robot::arm->move(KMaxMotorSpeed);
  printf("Arm position is %d\n", Robot::arm->getSensorValue());
}

bool MoveArmUp::isFinished() {
  return true;
}

void MoveArmUp::end() {
  // Code that runs when isFinished() returns true.
}

void MoveArmUp::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void MoveArmUp::blocked() {
}

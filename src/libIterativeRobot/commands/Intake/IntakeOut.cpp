#include "libIterativeRobot/commands/Intake/IntakeOut.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

IntakeOut::IntakeOut() {
  requires(Robot::intake);
  this->priority = 2;
}

bool IntakeOut::canRun() {
  return true; 
}

void IntakeOut::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("IntakeOut init\n");
}

void IntakeOut::execute() {
  Robot::intake->move(-KMaxMotorSpeed);
}

bool IntakeOut::isFinished() {
  return true;
}

void IntakeOut::end() {
  // Code that runs when isFinished() returns true.
}

void IntakeOut::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void IntakeOut::blocked() {
}

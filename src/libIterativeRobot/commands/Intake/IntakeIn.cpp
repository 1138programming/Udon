#include "libIterativeRobot/commands/Intake/IntakeIn.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

IntakeIn::IntakeIn() {
  requires(Robot::intake);
  this->priority = 2;
}

bool IntakeIn::canRun() {
  return true; 
}

void IntakeIn::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("IntakeIn init\n");
}

void IntakeIn::execute() {
  Robot::intake->move(KMaxMotorSpeed);
}

bool IntakeIn::isFinished() {
  return true;
}

void IntakeIn::end() {
  // Code that runs when isFinished() returns true.
}

void IntakeIn::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void IntakeIn::blocked() {
}

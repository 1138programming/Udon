#include "libIterativeRobot/commands/Pneumatics/FrontPistonOut.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

FrontPistonOut::FrontPistonOut() {
  requires(Robot::pneumatics);
  this->priority = 3;
}

bool FrontPistonOut::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void FrontPistonOut::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("Initializing FrontPistonOut bruv innit\n");
  Robot::pneumatics->S_FrontPistonOut();
}

void FrontPistonOut::execute() {
}

bool FrontPistonOut::isFinished() {
  return true;
}

void FrontPistonOut::end() {
  // Code that runs when isFinished() returns true.
}

void FrontPistonOut::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void FrontPistonOut::blocked() {
}
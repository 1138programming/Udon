#include "libIterativeRobot/commands/Pneumatics/FrontPistonIn.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

FrontPistonIn::FrontPistonIn() {
  requires(Robot::pneumatics);
  this->priority = 3;
}

bool FrontPistonIn::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void FrontPistonIn::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("Initializing FrontPistonIn bruv innit\n");
  Robot::pneumatics->S_FrontPistonIn();
}

void FrontPistonIn::execute() {
}

bool FrontPistonIn::isFinished() {
  return true;
}

void FrontPistonIn::end() {
  // Code that runs when isFinished() returns true.
}

void FrontPistonIn::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void FrontPistonIn::blocked() {
}
#include "libIterativeRobot/commands/Pneumatics/BackPistonIn.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

BackPistonIn::BackPistonIn() {
  requires(Robot::pneumatics);
  this->priority = 3;
}

bool BackPistonIn::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void BackPistonIn::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("Initializing BackPistonIn bruv innit\n");
  Robot::pneumatics->S_BackPistonIn();
}

void BackPistonIn::execute() {
}

bool BackPistonIn::isFinished() {
  return true;
}

void BackPistonIn::end() {
  // Code that runs when isFinished() returns true.
}

void BackPistonIn::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void BackPistonIn::blocked() {
}
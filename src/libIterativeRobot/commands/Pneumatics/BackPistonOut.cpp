#include "libIterativeRobot/commands/Pneumatics/BackPistonOut.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

BackPistonOut::BackPistonOut() {
  requires(Robot::pneumatics);
  this->priority = 3;
}

bool BackPistonOut::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void BackPistonOut::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("Initializing BackPistonOut bruv innit\n");
  Robot::pneumatics->S_BackPistonOut();
}

void BackPistonOut::execute() {
}

bool BackPistonOut::isFinished() {
  return true;
}

void BackPistonOut::end() {
  // Code that runs when isFinished() returns true.
}

void BackPistonOut::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void BackPistonOut::blocked() {
}
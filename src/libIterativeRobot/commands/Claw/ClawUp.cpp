#include "libIterativeRobot/commands/Claw/ClawUp.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

ClawUp::ClawUp() {
  requires(Robot::claw);
  this->priority = 2;
}

bool ClawUp::canRun() {
  return true; 
}

void ClawUp::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("ClawUp init\n");
  Robot::claw->S_ClawUp();
}

void ClawUp::execute() {
}

bool ClawUp::isFinished() {
  return true;
}

void ClawUp::end() {
  // Code that runs when isFinished() returns true.
}

void ClawUp::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void ClawUp::blocked() {
}

#include "libIterativeRobot/commands/Claw/ClawDown.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

ClawDown::ClawDown() {
  requires(Robot::claw);
  this->priority = 2;
}

bool ClawDown::canRun() {
  return true; 
}

void ClawDown::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("ClawDown init\n");
  Robot::claw->S_ClawDown();
}

void ClawDown::execute() {
}

bool ClawDown::isFinished() {
  return true;
}

void ClawDown::end() {
  // Code that runs when isFinished() returns true.
}

void ClawDown::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void ClawDown::blocked() {
}

#include "libIterativeRobot/commands/Claw/GoalOut.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

GoalOut::GoalOut() {
  requires(Robot::claw);
  this->priority = 2;
}

bool GoalOut::canRun() {
  return true; 
}

void GoalOut::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("GoalOut init\n");
  // Robot::claw->S_GoalOut();
}

void GoalOut::execute() {
}

bool GoalOut::isFinished() {
  return true;
}

void GoalOut::end() {
  // Code that runs when isFinished() returns true.
}

void GoalOut::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void GoalOut::blocked() {
}

#include "libIterativeRobot/commands/Claw/GoalIn.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

GoalIn::GoalIn() {
  requires(Robot::claw);
  this->priority = 2;
}

bool GoalIn::canRun() {
  return true; 
}

void GoalIn::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("GoalIn init\n");
  Robot::claw->S_GoalIn();
}

void GoalIn::execute() {
}

bool GoalIn::isFinished() {
  return true;
}

void GoalIn::end() {
  // Code that runs when isFinished() returns true.
}

void GoalIn::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void GoalIn::blocked() {
}

#include "libIterativeRobot/commands/Claw/ClawDefault.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

ClawDefault::ClawDefault() {
  requires(Robot::claw);
  this->priority = DefaultCommandPriority;
}

bool ClawDefault::canRun() {
  return true; 
}

void ClawDefault::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
}

void ClawDefault::execute() {
    Robot::claw->S_GoalOut();
    Robot::claw->S_ClawDown();

}

bool ClawDefault::isFinished() {
  return false;
}

void ClawDefault::end() {
  // Code that runs when isFinished() returns true.
}

void ClawDefault::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void ClawDefault::blocked() {
}

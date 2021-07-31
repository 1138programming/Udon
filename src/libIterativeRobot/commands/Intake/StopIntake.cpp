#include "libIterativeRobot/commands/Intake/StopIntake.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

StopIntake::StopIntake() {
  //requires(Robot::intake);
  //this->priority = DefaultCommandPriority; // Lowest priority
}

bool StopIntake::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void StopIntake::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  Robot::intake->move(0);
}

void StopIntake::execute() {
}

bool StopIntake::isFinished() {
  return false;
}

void StopIntake::end() {
  // Code that runs when isFinished() returns true.
}

void StopIntake::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void StopIntake::blocked() {

}

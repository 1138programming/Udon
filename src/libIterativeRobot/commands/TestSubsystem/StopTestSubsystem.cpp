#include "libIterativeRobot/commands/TestSubsystem/StopTestSubsystem.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

StopTestSubsystem::StopTestSubsystem() {
  requires(Robot::testSubsystem);
  this->priority = DefaultCommandPriority; // Lowest priority
}

bool StopTestSubsystem::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void StopTestSubsystem::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  Robot::testSubsystem->move(0);
}

void StopTestSubsystem::execute() {
}

bool StopTestSubsystem::isFinished() {
  return false;
}

void StopTestSubsystem::end() {
  // Code that runs when isFinished() returns true.
}

void StopTestSubsystem::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void StopTestSubsystem::blocked() {

}

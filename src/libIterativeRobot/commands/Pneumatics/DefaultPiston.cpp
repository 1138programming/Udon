#include "libIterativeRobot/commands/Pneumatics/DefaultPiston.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

DefaultPiston::DefaultPiston() {
  requires(Robot::pneumatics);
}

bool DefaultPiston::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void DefaultPiston::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("Initializing DefaultPiston bruv innit\n");
  Robot::pneumatics->S_FrontPistonOut();
  Robot::pneumatics->S_BackPistonOut();

}

void DefaultPiston::execute() {
}

bool DefaultPiston::isFinished() {
  return true;
}

void DefaultPiston::end() {
  // Code that runs when isFinished() returns true.
}

void DefaultPiston::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void DefaultPiston::blocked() {
}
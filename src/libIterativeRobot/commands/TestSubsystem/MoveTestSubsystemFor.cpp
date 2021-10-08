#include "libIterativeRobot/commands/TestSubsystem/MoveTestSubsystemFor.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

MoveTestSubsystemFor::MoveTestSubsystemFor(unsigned int duration, int speed) {
  this->duration = duration;
  this->speed = speed;

  requires(Robot::testSubsystem);
  this->priority = 1;
}

bool MoveTestSubsystemFor::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void MoveTestSubsystemFor::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  printf("Initializing TestSubsystem\n");
  startTime = pros::millis();
}

void MoveTestSubsystemFor::execute() {
    printf("Moving TestSubsystem: %d\n", pros::millis() - startTime);
    Robot::testSubsystem->move(speed);
}

bool MoveTestSubsystemFor::isFinished() {
  return pros::millis() > (startTime + duration);
}

void MoveTestSubsystemFor::end() {
  // Code that runs when isFinished() returns true.
  printf("Move TestSubsystem for end\n");
  Robot::testSubsystem->move(0);
}

void MoveTestSubsystemFor::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
  Robot::testSubsystem->move(0);
}

void MoveTestSubsystemFor::blocked() {

}

#include "libIterativeRobot/commands/TestSubsystem/TestSubsystemControl.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

TestSubsystemControl::TestSubsystemControl(bool Open) {
  this->Open = Open;
  requires(Robot::testSubsystem);
  this->priority = 2;
}

bool TestSubsystemControl::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void TestSubsystemControl::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  if (this->Open)
    Robot::testSubsystem->move(KMaxMotorSpeed);
  else
    Robot::testSubsystem->move(-KMaxMotorSpeed*0.75);
}

void TestSubsystemControl::execute() {
}

bool TestSubsystemControl::isFinished() {
  return false;
}

void TestSubsystemControl::end() {
  // Code that runs when isFinished() returns true.
}

void TestSubsystemControl::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}

void TestSubsystemControl::blocked() {

}

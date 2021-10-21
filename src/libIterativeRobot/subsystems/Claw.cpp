#include "main.h"
#include "libIterativeRobot/subsystems/Claw.h"
#include "libIterativeRobot/commands/Claw/ClawDefault.h"

Claw::Claw() {
  // Claw pistons
  clawPiston = new pros::ADIDigitalOut(clawPistonPort);
  leftPiston = new pros::ADIDigitalOut(leftPistonPort);
  rightPiston = new pros::ADIDigitalOut(rightPistonPort);

  clawPistonPos = false;
  leftPistonPos = true;
  rightPistonPos = true;
}

void Claw::initDefaultCommand() {
    setDefaultCommand(new ClawDefault());
}

void Claw::S_ClawDown() {
    // if (clawPistonPos) {      //if piston is extended, pull piston back
        clawPiston->set_value(false);
        clawPistonPos = false;
    // }
}

void Claw::S_ClawUp() {
    // if (!clawPistonPos) {      //if piston is not extended, push piston out
        clawPiston->set_value(true);
        clawPistonPos = true;
    // }
}

void Claw::S_GoalIn() {
    // if (leftPistonPos) {
        leftPiston->set_value(false);
        leftPistonPos = false;
    // }
    // if (rightPistonPos) {
        rightPiston->set_value(false);
        rightPistonPos = false;
    // }
}

void Claw::S_GoalOut() {
    // if (!leftPistonPos) {
        leftPiston->set_value(true);
        leftPistonPos = true;
    // }
    // if (!rightPistonPos) {
        rightPiston->set_value(true);
        rightPistonPos = true;
    // }
}

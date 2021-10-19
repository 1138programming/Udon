#include "main.h"
#include "libIterativeRobot/subsystems/Claw.h"
#include "libIterativeRobot/commands/Claw/ClawUp.h"
#include "libIterativeRobot/commands/Claw/ClawDown.h"
#include "libIterativeRobot/commands/Claw/GoalIn.h"
#include "libIterativeRobot/commands/Claw/GoalOut.h"

Claw::Claw() {
  // Claw pistons
  clawPiston = new pros::ADIDigitalOut(clawPistonPort);
  leftPiston = new pros::ADIDigitalOut(leftPistonPort);
  rightPiston = new pros::ADIDigitalOut(rightPistonPort);

//   clawPistonPos = false;
//   leftPistonPos = true;
//   rightPistonPos = true;
}

void Claw::initDefaultCommand() {
    // setDefaultCommand(new ClawUp());
    setDefaultCommand(new GoalOut());
}

// void S_ClawUp() {
//     if (Claw::clawPistonPos) {      //if piston is extended, pull piston back
//         clawPiston->set_value(false);
//         Claw::clawPistonPos = false;
//     }
// }

// void S_ClawDown() {
//     if (!Claw::clawPistonPos) {      //if piston is not extended, push piston out
//         clawPiston->set_value(true);
//         Claw::clawPistonPos = true;
//     }
// }

// void S_GoalIn() {
//     if (Claw::leftPistonPos) {
//         leftPiston->set_value(false);
//         Claw::leftPistonPos = false;
//     }
//     if (Claw::rightPistonPos) {
//         rightPiston->set_value(false);
//         Claw::rightPistonPos = false;
//     }
// }

// void S_GoalOut() {
//     if (!Claw::leftPistonPos) {
//         leftPiston->set_value(true);
//         Claw::leftPistonPos = true;
//     }
//     if (!Claw::rightPistonPos) {
//         rightPiston->set_value(true);
//         Claw::rightPistonPos = true;
//     }
// }

#include "libIterativeRobot/Robot.h"
#include "libIterativeRobot/commands/Auton/AutonGroup1.h"
#include "libIterativeRobot/commands/Miscellaneous/Delay.h"

AutonGroup1::AutonGroup1() {
  //addSequentialCommand(new MoveAnglerTo(0, 1000));
  addSequentialCommand(new Delay(0));
  // addSequentialCommand();

}

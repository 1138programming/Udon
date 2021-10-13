
#include "libIterativeRobot/commands/Miscellaneous/FlipOut.h"
#include "libIterativeRobot/commands/Arm/MoveArmTo.h"
#include "libIterativeRobot/commands/Arm/MoveArmFor.h"
#include "libIterativeRobot/commands/Intake/MoveIntakeFor.h"
#include "libIterativeRobot/commands/Claw/MoveClawFor.h"

FlipOut::FlipOut() {
  /*addSequentialCommand(new MoveAnglerTo(-2500, 1000));
  addSequentialCommand(new MoveArmFor(300, 127));
  addSequentialCommand(new MoveArmTo(0, 1000));
  addSequentialCommand(new MoveArmFor(300, 127));
  addSequentialCommand(new MoveArmTo(0, 1000));
  addSequentialCommand(new MoveAnglerTo(0));*/
  addParallelCommand(new MoveIntakeFor(1000, KMaxMotorSpeed));
  addParallelCommand(new MoveClawFor(1000, KMaxMotorSpeed));

}

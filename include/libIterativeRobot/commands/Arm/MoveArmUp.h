#ifndef _COMMANDS_MOVEARMUP_H_
#define _COMMANDS_MOVEARMUP_H_

#include "libIterativeRobot/commands/Command.h"

class MoveArmUp: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    MoveArmUp();
  private:
};

#endif // _COMMANDS_MOVEARMUP_H_

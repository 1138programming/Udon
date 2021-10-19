#ifndef _COMMANDS_MOVEARMDOWN_H_
#define _COMMANDS_MOVEARMDOWN_H_

#include "libIterativeRobot/commands/Command.h"

class MoveArmDown: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    MoveArmDown();
  private:
};

#endif // _COMMANDS_MOVEARMDOWN_H_

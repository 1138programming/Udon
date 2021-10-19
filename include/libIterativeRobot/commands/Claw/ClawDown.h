#ifndef _COMMANDS_CLAWDOWN_H_
#define _COMMANDS_CLAWDOWN_H_

#include "libIterativeRobot/commands/Command.h"

class ClawDown: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    ClawDown();
  private:
};

#endif // _COMMANDS_CLAWDOWN_H_

#ifndef _COMMANDS_CLAWUP_H_
#define _COMMANDS_CLAWUP_H_

#include "libIterativeRobot/commands/Command.h"

class ClawUp: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    ClawUp();
  private:
};

#endif // _COMMANDS_CLAWUP_H_

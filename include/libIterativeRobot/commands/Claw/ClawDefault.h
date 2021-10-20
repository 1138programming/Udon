#ifndef _COMMANDS_CLAWDEFAULT_H_
#define _COMMANDS_CLAWDEFAULT_H_

#include "libIterativeRobot/commands/Command.h"

class ClawDefault: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    ClawDefault();
  private:
};

#endif // _COMMANDS_CLAWDEFAULT_H_

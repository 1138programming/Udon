#ifndef _COMMANDS_FRONTPISTONIN_H_
#define _COMMANDS_FRONTPISTONIN_H_

#include "libIterativeRobot/commands/Command.h"

class FrontPistonIn: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    FrontPistonIn();
  private:
};

#endif // _COMMANDS_PNEUMATICSCONTROL_H_

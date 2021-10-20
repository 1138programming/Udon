#ifndef _COMMANDS_FRONTPISTONOUT_H_
#define _COMMANDS_FRONTPISTONOUT_H_

#include "libIterativeRobot/commands/Command.h"

class FrontPistonOut: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    FrontPistonOut();
  private:
};

#endif // _COMMANDS_PNEUMATICSCONTROL_H_

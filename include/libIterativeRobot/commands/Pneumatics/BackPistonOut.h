#ifndef _COMMANDS_BACKPISTONOUT_H_
#define _COMMANDS_BACKPISTONOUT_H_

#include "libIterativeRobot/commands/Command.h"

class BackPistonOut: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    BackPistonOut();
  private:
};

#endif // _COMMANDS_PNEUMATICSCONTROL_H_

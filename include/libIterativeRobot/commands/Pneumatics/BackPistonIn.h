#ifndef _COMMANDS_BACKPISTONIN_H_
#define _COMMANDS_BACKPISTONIN_H_

#include "libIterativeRobot/commands/Command.h"

class BackPistonIn: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    BackPistonIn();
  private:
};

#endif // _COMMANDS_PNEUMATICSCONTROL_H_

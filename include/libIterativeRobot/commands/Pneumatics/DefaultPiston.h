#ifndef _COMMANDS_DEFAULTPISTON_H_
#define _COMMANDS_DEFAULTPISTON_H_

#include "libIterativeRobot/commands/Command.h"

class DefaultPiston: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    DefaultPiston();
  private:
};

#endif // _COMMANDS_PNEUMATICSCONTROL_H_

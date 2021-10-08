#ifndef _COMMANDS_STOPTestSubsystem_H_
#define _COMMANDS_STOPTestSubsystem_H_

#include "libIterativeRobot/commands/Command.h"

class StopTestSubsystem: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    StopTestSubsystem();
  private:
};

#endif // _COMMANDS_STOPTestSubsystem_H_

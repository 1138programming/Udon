#ifndef _COMMANDS_GOALOUT_H_
#define _COMMANDS_GOALOUT_H_

#include "libIterativeRobot/commands/Command.h"

class GoalOut: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    GoalOut();
  private:
};

#endif // _COMMANDS_GOALOUT_H_

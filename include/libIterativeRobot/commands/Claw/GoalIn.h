#ifndef _COMMANDS_GOALIN_H_
#define _COMMANDS_GOALIN_H_

#include "libIterativeRobot/commands/Command.h"

class GoalIn: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    GoalIn();
  private:
};

#endif // _COMMANDS_GOALIN_H_

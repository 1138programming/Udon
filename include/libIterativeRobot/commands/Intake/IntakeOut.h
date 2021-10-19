#ifndef _COMMANDS_INTAKEOUT_H_
#define _COMMANDS_INTAKEOUT_H_

#include "libIterativeRobot/commands/Command.h"

class IntakeOut: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    IntakeOut();
  private:
};

#endif // _COMMANDS_INTAKEOUT_H_

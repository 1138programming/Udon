#ifndef _COMMANDS_INTAKEIN_H_
#define _COMMANDS_INTAKEIN_H_

#include "libIterativeRobot/commands/Command.h"

class IntakeIn: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    IntakeIn();
  private:
};

#endif // _COMMANDS_INTAKEIN_H_

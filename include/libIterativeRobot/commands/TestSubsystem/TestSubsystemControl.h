#ifndef _COMMANDS_TestSubsystemCONTROL_H_
#define _COMMANDS_TestSubsystemCONTROL_H_

#include "libIterativeRobot/commands/Command.h"

class TestSubsystemControl: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    TestSubsystemControl(bool Open);
  private:
    bool Open;
};

#endif // _COMMANDS_TestSubsystemCONTROL_H_

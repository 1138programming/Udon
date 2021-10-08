#ifndef _COMMANDS_MOVETESTSUBSYSTEMFOR_H_
#define _COMMANDS_MOVETESTSUBSYSTEMFOR_H_

#include "libIterativeRobot/commands/Command.h"

class MoveTestSubsystemFor: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    MoveTestSubsystemFor(unsigned int duration, int speed = 127);
  private:
    unsigned int duration;
    int speed;
    unsigned int startTime;
};

#endif // _COMMANDS_MOVETESTSUBSYSTEMFOR_H_

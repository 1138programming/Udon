#ifndef _COMMANDS_MOVEINTAKEFOR_H_
#define _COMMANDS_MOVEINTAKEFOR_H_

#include "libIterativeRobot/commands/Command.h"

class MoveIntakeFor: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    MoveIntakeFor(unsigned int duration, int speed = 127);
  private:
    unsigned int duration;
    int speed;
    unsigned int startTime;
};

#endif // _COMMANDS_MOVEINTAKEFOR_H_

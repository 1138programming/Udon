#ifndef _SUBSYSTEMS_TESTSUBSYSTEM_H_
#define _SUBSYSTEMS_TESTSUBSYSTEM_H_

#include "./Subsystem.h"
#include "api.h"

class TestSubsystem : public libIterativeRobot::Subsystem {
  private:
    // Claw motors
    Motor* testMotor;

  public:
    void initDefaultCommand();
    void move(int speed);
    TestSubsystem();
};

#endif // _SUBSYSTEMS_TestSubsystem_H_

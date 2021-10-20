#ifndef _SUBSYSTEMS_INTAKE_H_
#define _SUBSYSTEMS_INTAKE_H_

#include "./Subsystem.h"
#include "api.h"

class Intake : public libIterativeRobot::Subsystem {
  private:
    // intake motors
    Motor* intakeMotor;

  public:
    void initDefaultCommand();
    void move(int speed);
    Intake();
};

#endif // _SUBSYSTEMS_INTAKE_H_

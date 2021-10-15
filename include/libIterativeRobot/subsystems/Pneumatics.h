#ifndef _SUBSYSTEMS_PNEUMATICS_H_
#define _SUBSYSTEMS_PNEUMATICS_H_

#include "./Subsystem.h"
#include "api.h"

class Pneumatics : public libIterativeRobot::Subsystem {
  private:
    pros::ADIDigitalOut FrontPiston;
    pros::ADIDigitalOut BackPiston;
  public:
    void initDefaultCommand();
    void moveFrontPiston(int speed);
    void moveBackPiston(int speed);
    Pneumatics();
};

#endif // _SUBSYSTEMS_PNEUMATICS_H_

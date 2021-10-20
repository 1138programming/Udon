#ifndef _SUBSYSTEMS_PNEUMATICS_H_
#define _SUBSYSTEMS_PNEUMATICS_H_

#include "./Subsystem.h"
#include "api.h"

class Pneumatics : public libIterativeRobot::Subsystem {
  private:
    pros::ADIDigitalOut* FrontPiston;
    pros::ADIDigitalOut* BackPiston;
  public:
    static bool pneumaticsPistonPos;
    void initDefaultCommand();
    void S_BackPistonIn();
    void S_FrontPistonIn();
    void S_BackPistonOut();
    void S_FrontPistonOut();
    Pneumatics();
};

#endif // _SUBSYSTEMS_PNEUMATICS_H_

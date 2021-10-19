#ifndef _SUBSYSTEMS_CLAW_H_
#define _SUBSYSTEMS_CLAW_H_

#include "./Subsystem.h"
#include "api.h"

class Claw : public libIterativeRobot::Subsystem {
  private:
    // Claw pistons
    pros::ADIDigitalOut* clawPiston;
    pros::ADIDigitalOut* leftPiston;
    pros::ADIDigitalOut* rightPiston; 

  protected:   

  public:
    static bool clawPistonPos;
    static bool leftPistonPos;
    static bool rightPistonPos;
    void initDefaultCommand();
    void S_ClawUp();
    void S_ClawDown();
    void S_GoalOut();
    void S_GoalIn();
    bool clawPistonIsOut();
    bool leftPistonIsOut();
    bool rightPistonIsOut();
    Claw();
};

#endif // _SUBSYSTEMS_CLAW_H_
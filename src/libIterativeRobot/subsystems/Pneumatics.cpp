#include "main.h"
//#include "libIterativeRobot/commands/Pneumatics/BackPisonIn.h"
//#include "libIterativeRobot/commands/Pneumatics/FrontPisonIn.h"
//#include "libIterativeRobot/commands/Pneumatics/FrontPisonOut.h"
//#include "libIterativeRobot/commands/Pneumatics/Pneumatics.h"

Pneumatics::Pneumatics() {
  FrontPiston = new pros::ADIDigitalOut(DIGITAL_PISTON_PORT_FRONT);
  BackPiston = new pros::ADIDigitalOut(DIGITAL_PISTON_PORT_BACK);
  
}

void Pneumatics::S_FrontPistonIn() {
    if (Pneumatics::pneumaticsPistonPos)
    {
        FrontPiston->set_value(false);
        Pneumatics::pneumaticsPistonPos = false;
    }
    
}

void Pneumatics::S_BackPistonIn() {
    if (Pneumatics::pneumaticsPistonPos)
    {
        BackPiston->set_value(false);
        Pneumatics::pneumaticsPistonPos = false;
    }
}

void Pneumatics::S_FrontPistonOut() {
    if (!Pneumatics::pneumaticsPistonPos)
    {
        FrontPiston->set_value(true);
        Pneumatics::pneumaticsPistonPos = true;
    }
}

void Pneumatics::S_BackPistonOut() {
    if (!Pneumatics::pneumaticsPistonPos)
    {
        BackPiston->set_value(true);
        Pneumatics::pneumaticsPistonPos = true;
    }
}
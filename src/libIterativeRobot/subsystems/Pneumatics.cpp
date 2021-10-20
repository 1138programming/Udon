#include "main.h"
#include "libIterativeRobot/commands/Pneumatics/DefaultPiston.h"
/*#include "libIterativeRobot/commands/Pneumatics/BackPistonIn.h"
#include "libIterativeRobot/commands/Pneumatics/BackPistonOut.h"
#include "libIterativeRobot/commands/Pneumatics/FrontPistonIn.h"
#include "libIterativeRobot/commands/Pneumatics/FrontPistonOut.h"*/

Pneumatics::Pneumatics() {
  FrontPiston = new pros::ADIDigitalOut(DIGITAL_PISTON_PORT_FRONT);
  BackPiston = new pros::ADIDigitalOut(DIGITAL_PISTON_PORT_BACK);
  
}

void Pneumatics::initDefaultCommand() {
}

void Pneumatics::S_FrontPistonIn() {
    if (Pneumatics::pneumaticsFrontPistonPos)
    {
        FrontPiston->set_value(false);
        Pneumatics::pneumaticsFrontPistonPos = false;
    }
    
}

void Pneumatics::S_BackPistonIn() {
    if (Pneumatics::pneumaticsBackPistonPos)
    {
        BackPiston->set_value(false);
        Pneumatics::pneumaticsBackPistonPos = false;
    }
}

void Pneumatics::S_FrontPistonOut() {
    if (!Pneumatics::pneumaticsFrontPistonPos)
    {
        FrontPiston->set_value(true);
        Pneumatics::pneumaticsFrontPistonPos = true;
    }
}

void Pneumatics::S_BackPistonOut() {
    if (!Pneumatics::pneumaticsBackPistonPos)
    {
        BackPiston->set_value(true);
        Pneumatics::pneumaticsBackPistonPos = true;
    }
}
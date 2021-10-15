#include "main.h"
//#include "libIterativeRobot/commands/Pneumatics/StopPneumatics.h"

Pneumatics::Pneumatics() {
    FrontPiston = ADIDigitalOut::getMotor(DIGITAL_SENSOR_PORT_FRONT);
    BackPiston = ADIDigitalOut::getMotor(DIGITAL_SENSOR_PORT_BACK);
}

void Pneumatics::initDefaultCommand() {

}

void Pneumatics::moveFrontPiston(bool state) {
    BackPiston.set_value(state);
}

void Pneumatics::moveBackPiston(bool state) {
    FrontPison.set_value(state);
}
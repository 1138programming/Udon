/**
 * @file Constants.h
 * @brief Provides constants used throughout the entire code. Contains user-readable motor names
 */

#include "abstractBaseClasses/Motor.h"

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#define DEFAULT_TASK_TIME 10000
#define DELAY_TIME 10
#define MAX_MOTORS 20
#define MAX_FOLLOWERS 3

// Motor ports
const int DIGITAL_SENSOR_PORT_FRONT = 69;
const int DIGITAL_SENSOR_PORT_BACK = 420;
const int frontLeftBasePort = 1;
const int frontRightBasePort = 2;
const int backLeftBasePort = 11;
const int backRightBasePort = 12;

const int clawMotorPort = 6;
const int intakeMotorPort = 10;

const int leftArmMotorPort = 19;
const int rightArmMotorPort = 20;

const std::uint8_t bumperPort1 = 'g';

// @ -31,7 +31,7 @@
const std::uint8_t bumperPort2 = 'h';

// Motor gearsets
const pros::motor_gearset_e_t baseMotorGearset = pros::E_MOTOR_GEARSET_18;
const pros::motor_gearset_e_t clawMotorGearset = pros::E_MOTOR_GEARSET_18;
const pros::motor_gearset_e_t intakeMotorGearset = pros::E_MOTOR_GEARSET_18;
const pros::motor_gearset_e_t armMotorGearset = pros::E_MOTOR_GEARSET_06;


// Global configurations
const pros::motor_encoder_units_e_t globalEncoderUnits = pros::E_MOTOR_ENCODER_COUNTS;
const pros::motor_brake_mode_e_t globalBrakeMode = pros::E_MOTOR_BRAKE_HOLD;
const int globalSlewStep = 14;

//Motor and encoder constants
const int KMaxMotorSpeed = 127;
const int K50MotorSpeed = KMaxMotorSpeed*.50;
const int KMaxJoystickValue = 127;
const int encoderTicks = 360; // Encoder ticks in one revolution
const float rotationsPerInch = 31.400156410256; // TODO check if this is correct

// Encoder ports
const int exampleEncoderTopPort = 0;
const int exampleEncoderBottomPort = 1;

// Global things that we need
const int imuPort = 20;

#endif
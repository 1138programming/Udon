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
const int frontLeftBasePort = 13;
const int frontRightBasePort = 18;
const int midLeftBasePort = 12;
const int midRightBasePort = 19;
const int backLeftBasePort = 11;
const int backRightBasePort = 20;

const int IntakeMotorPort = 16;

const int armMotorPort = 1;

//ADI Digital Ports

const std::uint8_t clawPistonPort = 'a';
const std::uint8_t leftPistonPort = 'b';
const std::uint8_t rightPistonPort = 'c';


// Motor gearsets
/*   reference:
pros::E_MOTOR_GEARSET_36----------36:1, 100 RPM, Red gear set
pros::E_MOTOR_GEARSET_18----------18:1, 200 RPM, Green gear set
pros::E_MOTOR_GEARSET_06----------6:1, 600 RPM, Blue Gear Set
pros::E_MOTOR_GEARSET_INVALID-----Error return code
*/
const pros::motor_gearset_e_t baseMotorGearset = pros::E_MOTOR_GEARSET_18;
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
const int imuPort = 0; //not added yet

#endif

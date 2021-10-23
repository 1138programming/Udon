#include "main.h"

class Base {
    private:
        std::shared_ptr<ChassisController> baseController =
            ChassisControllerBuilder()
                .withMotors(frontLeftMotorPort, frontRightMotorPort, backLeftMotorPort, backRightMotorPort);
                // Green gearset, 4 in wheel diam, 11.5 in wheel track
                .withDimensions(AbstractMotor::gearset::green, {{4_in, 11.5_in}, imev5GreenTPR})
                .build();
    public:
        void move(leftSpeed, RightSpeed) {
            baseController->
        }
}
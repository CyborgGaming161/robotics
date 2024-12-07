#include "subsystems/drivetrain.hpp"
using namespace okapi;
Motor rightFront(leftFront, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor rightBack(rightBack, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor leftFront(leftFront, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor leftBack(leftBack, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);

MotorGroup leftDrive({leftFront, leftBack});
MotorGroup rightDrive({rightFront, rightBack});

std::shared_ptr<OdomChassisController> drive = ChassisControlBuilder()
    .witMotors({leftFront, leftBack}, {rightFront, rightBack})
    .withDimensions(AbstractMotor::gearset::blue, {{4, 15}, okapi::imev5BlueTPR * (2/3)})
    .withOdometry()
    .buildOdometry();
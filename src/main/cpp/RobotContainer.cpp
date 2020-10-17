/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RobotContainer.h"

frc::XboxController controller{0};

RobotContainer::RobotContainer()
{
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings()
{
  frc2::JoystickButton(&controller, 1).WhenPressed(SetCylinderCommand(&pneumatics, frc::DoubleSolenoid::Value::kForward));
  frc2::JoystickButton(&controller, 2).WhenPressed(SetCylinderCommand(&pneumatics, frc::DoubleSolenoid::Value::kReverse));
  frc2::JoystickButton(&controller, 3).WhenPressed(SetCylinderCommand(&pneumatics, frc::DoubleSolenoid::Value::kOff));
}

frc2::Command *RobotContainer::GetAutonomousCommand()
{
  // An example command will be run in autonomous
  return nullptr;
}

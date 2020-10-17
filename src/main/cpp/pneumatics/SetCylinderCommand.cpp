/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "pneumatics/SetCylinderCommand.h"

SetCylinderCommand::SetCylinderCommand(PneumaticsSubsystem *subsystem, frc::DoubleSolenoid::Value value)
    : subsystem{subsystem} {}

void SetCylinderCommand::Initialize() { subsystem->SetCylinder(value); }

bool SetCylinderCommand::IsFinished() { return true; }

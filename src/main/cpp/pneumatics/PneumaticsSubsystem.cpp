/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "pneumatics/PneumaticsSubsystem.h"

frc::Compressor compressor{0};

frc::DoubleSolenoid cylinder{1, 2};

PneumaticsSubsystem::PneumaticsSubsystem()
{
    compressor.Start();
}

void PneumaticsSubsystem::SetCylinder(frc::DoubleSolenoid::Value value)
{
    cylinder.Set(value);
}

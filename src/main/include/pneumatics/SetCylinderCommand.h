/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <frc/DoubleSolenoid.h>

#include "pneumatics/PneumaticsSubsystem.h"

/**
 * An example command that uses an example subsystem.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
class SetCylinderCommand
    : public frc2::CommandHelper<frc2::CommandBase, SetCylinderCommand>
{
public:
    /**
   * Creates a new SetCylinderCommand.
   *
   * @param subsystem The subsystem used by this command.
   */
    explicit SetCylinderCommand(PneumaticsSubsystem *subsystem, frc::DoubleSolenoid::Value value);

    void Initialize() override;

    bool IsFinished() override;

private:
    PneumaticsSubsystem *subsystem;
    frc::DoubleSolenoid::Value value;
};

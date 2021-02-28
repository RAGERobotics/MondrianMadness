// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandHelper.h>
#include <frc2/command/SequentialCommandGroup.h>

#include "commands/DriveDistance.h"
#include "commands/TurnDegrees.h"
#include "subsystems/Drivetrain.h"

class AutonomousDistance
    : public frc2::CommandHelper<frc2::SequentialCommandGroup,
                                 AutonomousDistance>
{
public:
  explicit AutonomousDistance(Drivetrain *drive)
  {
    AddCommands(
        DriveDistance(-0.5, 16_in, drive), TurnDegrees(-0.5, 60_deg, drive),
        DriveDistance(-0.5, 17_in, drive), TurnDegrees(-0.5, 92_deg, drive),
        DriveDistance(-0.5, 27.5_in, drive), TurnDegrees(0.5, 99_deg, drive),
        DriveDistance(-0.5, 16_in, drive), TurnDegrees(0.5, 66.5_deg, drive),
        DriveDistance(-0.5, 16_in, drive)
        // DriveDistance(-0.7, 14_in, drive), TurnDegrees(-0.7, 60_deg, drive)
        // DriveDistance(-1, 10.5_in, drive), TurnDegrees(-0.5, 87_deg, drive),
        // DriveDistance(-1, 14.5_in, drive), TurnDegrees(0.5, 100_deg, drive),
        // DriveDistance(-1, 10_in, drive), TurnDegrees(0.5, 60_deg, drive),
        // DriveDistance(-1, 10_in, drive)

    );
  }
};

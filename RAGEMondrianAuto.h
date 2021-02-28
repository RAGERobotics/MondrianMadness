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
                                 AutonomousDistance> {
 public:
  explicit AutonomousDistance(Drivetrain* drive) {
    AddCommands(
        DriveDistance(0.75, 15_in, drive), TurnDegrees(-0.75, 44_deg, drive),
        DriveDistance(0.75, 17.5_in, drive), TurnDegrees(-0.75, 75_deg, drive),
        DriveDistance(0.75, 27_in, drive), TurnDegrees(0.75, 83_deg, drive),
        DriveDistance(0.75, 17_in, drive), TurnDegrees(0.75, 50_deg, drive),
        DriveDistance(0.75, 14_in, drive));
  }
};

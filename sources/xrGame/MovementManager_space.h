//	Module 		: MovementManager_space.h
//	Description : Movement manager space

#pragma once

namespace MovementManager
{
	enum EPathType
	{
		ePathTypeGamePath = u32(0),
		ePathTypeLevelPath,
		ePathTypePatrolPath,
		ePathTypeNoPath,
		ePathTypeDummy = u32(-1)
	};
};

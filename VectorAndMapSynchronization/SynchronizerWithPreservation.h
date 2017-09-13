#pragma once
#include "stdafx.h"
#include "Synchronizer.h"

class SynchronizerWithPreservation : public Synchronizer
{
public:
	void Synchronize(std::vector<int>& vector_for_synchronization,
		std::map<int, int>& map_for_synchronization) override;
};

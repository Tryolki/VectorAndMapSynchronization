#pragma once
#include "stdafx.h"
#include "Synchronizer.h"

class SynchronizerWithoutPreservation : public Synchronizer
{
public:
	SynchronizerWithoutPreservation(std::vector<int>vec, std::map<int, int> map) : Synchronizer(vec, map) {}
	void Synchronize() override;
};


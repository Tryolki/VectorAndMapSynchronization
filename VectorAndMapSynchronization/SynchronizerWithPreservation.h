#pragma once
#include "stdafx.h"
#include "Synchronizer.h"

class SynchronizerWithPreservation : public Synchronizer
{
public:
	SynchronizerWithPreservation(std::vector<int>vec, std::map<int, int> map) : Synchronizer(vec, map) {};
	void Synchronize() override;
};

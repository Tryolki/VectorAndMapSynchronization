#pragma once
#include "SynchronizerWithoutPreservation.h"
#include "SynchronizerWithPreservation.h"

static class SynchronizerFactory
{
public:
	static Synchronizer* GenerateObject(std::string type, 
		std::vector<int>vec, 
		std::map<int, int> map);
};


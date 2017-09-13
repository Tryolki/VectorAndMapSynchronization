#pragma once
#include "SynchronizerWithoutPreservation.h"
#include "SynchronizerWithPreservation.h"

static class SynchronizerFactory
{
public:
	static Synchronizer * Synchronize(std::string type);
};


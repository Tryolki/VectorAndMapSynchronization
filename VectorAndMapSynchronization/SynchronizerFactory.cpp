#include "stdafx.h"
#include "SynchronizerFactory.h"

Synchronizer * SynchronizerFactory::Synchronize(
	const std::string type)
{
	if (type == "With")
	{
		return new SynchronizerWithPreservation();
	}
	if (type == "Without")
	{
		return new SynchronizerWithoutPreservation();
	}
	return nullptr;
}


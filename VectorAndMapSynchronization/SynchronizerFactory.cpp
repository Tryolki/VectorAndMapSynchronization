#include "stdafx.h"
#include "SynchronizerFactory.h"

Synchronizer * SynchronizerFactory::GenerateObject(
	std::string type, 
	std::vector<int>vec, 
	std::map<int, int> map)
{
	if (type == "With")
	{
		return new SynchronizerWithPreservation(vec, map);
	}
	if (type == "Without")
	{
		return new SynchronizerWithoutPreservation(vec, map);
	}
	return nullptr;
}

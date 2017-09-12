#include "stdafx.h"
#include "Synchronizer.h"

void Synchronizer::Synchronize(std::vector<int>& synchronizeVector, std::map<int, int>& synchronizeMap)
{
	std::vector<int> tmp_vector;
	std::map<int, int> tmp_map;
	int map_counter = 0;
	for (size_t i = 0; i < synchronizeVector.size(); i++)
	{
		if (synchronizeVector[i] != synchronizeMap[i])
			synchronizeVector[i] = 0;

	}
	for (size_t i = 0; i < synchronizeMap.size(); i++)
	{
		if (synchronizeMap[i] != synchronizeMap[i])
			synchronizeMap[i] = 0;

	}
}

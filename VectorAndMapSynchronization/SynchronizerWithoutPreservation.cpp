#include "stdafx.h"
#include "SynchronizerWithoutPreservation.h"

void SynchronizerWithoutPreservation::Synchronize(
	std::vector<int>& vector_for_synchronization,
	std::map<int, int>& map_for_synchronization) 
{
	std::vector<int> tmp_vec;
	std::map<int, int> tmp_map;

	int last_key = 0;
	try
	{
		for each (auto map_iter in map_for_synchronization)
		{
			last_key = map_iter.first;
			if (map_iter.second == vector_for_synchronization.at(map_iter.first))
			{
				tmp_vec.push_back(map_iter.second);
				tmp_map[map_iter.first] = map_iter.second;
			}
			else {
				map_iter.second = 0;
			}
		}
	}
	catch (const std::out_of_range&)
	{
		auto first_key_iter = map_for_synchronization.find(last_key);
		map_for_synchronization.erase(first_key_iter, map_for_synchronization.end());
	}
	vector_for_synchronization = tmp_vec;
	map_for_synchronization = tmp_map;
}

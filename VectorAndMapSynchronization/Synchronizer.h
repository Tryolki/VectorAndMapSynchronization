#pragma once
#include <algorithm>

class Synchronizer
{
public:
	virtual void Synchronize(std::vector<int>& vector_for_synchronization,
		std::map<int, int>& map_for_synchronization) = 0;
};


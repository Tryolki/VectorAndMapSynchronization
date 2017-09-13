#pragma once
#include <algorithm>

class Synchronizer
{
public:
	Synchronizer(std::vector<int>vec, std::map<int, int> map) :
		vector_for_synchronization(vec), map_for_synchronization(map) {}
	virtual void Synchronize() = 0;
	std::vector<int> GetVector() { return vector_for_synchronization; }
	std::map<int, int> GetMap() { return map_for_synchronization; }

protected:
	std::vector<int> vector_for_synchronization;
	std::map<int, int> map_for_synchronization;
};


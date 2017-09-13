#pragma once
#include "Generator.h"
class Deleter
{
public:
	virtual ~Deleter() {}
	virtual void DeleteRandomElementsFromVector(std::vector<int>& container) = 0;
	virtual void DeleteRandomElementsFromMap(std::map<int,int>& container) = 0;
	size_t max_elements_for_deletion = 15;
};


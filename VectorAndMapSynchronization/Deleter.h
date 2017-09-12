#pragma once
#include "Generator.h"
#include <vector>
#include <map>
class Deleter
{
public:
	static void DeleteRandomElementsFromVector(std::vector<int>& container);
	static void DeleteRandomElementsFromMap(std::map<int,int>& container);

};


#pragma once
#include "Generator.h"
#include <vector>
#include <map>

class Filler
{
public:
	Filler(Generator & fillerGenerator, size_t count) : generator(fillerGenerator), elementsCount(count) {}
	void FillVector(std::vector<int> & fillingVector);
	void FillMap(std::map<int, int> & fillingMap);
	~Filler();
private:
	Generator & generator;
	size_t elementsCount;
};


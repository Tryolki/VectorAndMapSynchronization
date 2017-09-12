#include "stdafx.h"
#include "Builder.h"

Builder::Builder(size_t elementsCount)
{
	generator = new OneToNineGenerator();
	filler = new Filler(*generator, elementsCount);
}

Builder::~Builder()
{
	if(!generator)
	{
		delete generator;
	}
	if (!filler)
	{
		delete filler;
	}
}

std::vector<int> Builder::GenerateFillVector()
{
	std::vector<int> tmpVector;
	filler->FillVector(tmpVector);
	return tmpVector;
}

std::map<int, int> Builder::GenerateFillMap()
{
	std::map<int, int> tmpMap;
	filler->FillMap(tmpMap);
	return tmpMap;
}

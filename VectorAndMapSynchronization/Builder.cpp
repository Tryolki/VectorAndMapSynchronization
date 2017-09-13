#include "stdafx.h"
#include "Builder.h"

Builder::Builder(size_t elementsCount)
{
	filler = new Filler(elementsCount);
}

Builder::~Builder()
{
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

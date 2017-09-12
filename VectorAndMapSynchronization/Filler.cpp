#include "stdafx.h"
#include "Filler.h"

void Filler::FillVector(std::vector<int>& fillingVector)
{
	for (auto elemPos = 0; elemPos < elementsCount; elemPos++)
	{
		fillingVector.push_back(generator.GenerateValue());
	}
}

void Filler::FillMap(std::map<int, int>& fillingMap)
{
	for (auto elemPos = 0; elemPos < elementsCount; elemPos++)
	{
		fillingMap.emplace(elemPos, generator.GenerateValue());
	}
}

Filler::~Filler()
{
}

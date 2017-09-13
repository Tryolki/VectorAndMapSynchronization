#include "stdafx.h"
#include "Filler.h"

void Filler::FillVector(std::vector<int>& fillingVector)
{
	for (size_t elemPos = 0; elemPos < elements_count; elemPos++)
	{
		fillingVector.push_back(Generator().GenerateRandomValue(max_value)+1);
	}
}

void Filler::FillMap(std::map<int, int>& fillingMap)
{
	for (size_t elemPos = 0; elemPos < elements_count; elemPos++)
	{
		fillingMap[elemPos] = Generator().GenerateRandomValue(max_value)+1;
	}
}

Filler::~Filler()
{
}

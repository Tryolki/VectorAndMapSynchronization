#include "stdafx.h"
#include "Deleter.h"

void Deleter::DeleteRandomElementsFromVector(std::vector<int>& container)
{
	size_t element_count = Generator().GenerateRandomValue(15) + 1;
	for (auto i = 0; i < element_count; i++)
	{
		auto index = Generator().GenerateRandomValue(container.size() - 1);
		container.erase(container.begin() + index);
	}
}

void Deleter::DeleteRandomElementsFromMap(std::map<int, int>& container)
{
	size_t element_count = Generator().GenerateRandomValue(15) + 1;
	for (auto i = 0; i < element_count; i++)
	{
		auto index = Generator().GenerateRandomValue(container.size() - 1);
		auto it = container.find(index);
		container.erase(it);
	}
}

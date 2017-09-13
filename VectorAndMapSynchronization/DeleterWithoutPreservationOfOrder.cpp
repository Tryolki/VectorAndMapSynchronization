#include "stdafx.h"
#include "DeleterWithoutPreservationOfOrder.h"

void DeleterWithoutPreservationOfOrder::DeleteRandomElementsFromVector(std::vector<int>& container)
{
	size_t element_count = Generator().GenerateRandomValue(max_elements_for_deletion) + 1;
	for (size_t i = 0; i < element_count; i++)
	{
		auto index = Generator().GenerateRandomValue(container.size() - 1);
		container.erase(container.begin() + index);
	}
}

void DeleterWithoutPreservationOfOrder::DeleteRandomElementsFromMap(std::map<int, int>& container)
{
	size_t element_count = Generator().GenerateRandomValue(max_elements_for_deletion) + 1;
	for (size_t i = 0; i < element_count; i++)
	{
		auto index = Generator().GenerateRandomValue(container.size() - 1);
		auto it = container.find(index);
		container.erase(it);
	}
}

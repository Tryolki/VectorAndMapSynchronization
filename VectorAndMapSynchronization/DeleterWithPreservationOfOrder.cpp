#include "stdafx.h"
#include "DeleterWithPreservationOfOrder.h"

void DeleterWithPreservationOfOrder::DeleteRandomElementsFromVector(std::vector<int>& container)
{
	size_t element_count = max_elements_for_deletion > container.size() ? Generator().GenerateRandomValue(container.size()) : Generator().GenerateRandomValue(max_elements_for_deletion) + 1;
	for (size_t i = 0; i < element_count; i++)
	{
		auto index = Generator().GenerateRandomValue(container.size() - 1);
		container.at(index) = 0;
	}
}

void DeleterWithPreservationOfOrder::DeleteRandomElementsFromMap(std::map<int, int>& container)
{
	size_t element_count = max_elements_for_deletion > container.size() ? Generator().GenerateRandomValue(container.size()) : Generator().GenerateRandomValue(max_elements_for_deletion) + 1;
	for (size_t i = 0; i < element_count; i++)
	{
		auto index = Generator().GenerateRandomValue(container.size() - 1);
		container.at(index) = 0;
	}
}

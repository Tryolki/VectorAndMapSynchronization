#include "stdafx.h"
#include "SynchronizerWithPreservation.h"

void SynchronizerWithPreservation::Synchronize(
	std::vector<int>& vector_for_synchronization, 
	std::map<int, int>& map_for_synchronization)
{
	for (size_t i = 0; i < vector_for_synchronization.size(); i++)
	{
		if (vector_for_synchronization[i] != map_for_synchronization[i])
		{
			vector_for_synchronization[i] = 0;
			map_for_synchronization[i] = 0;
		}
	}
}

// VectorAndMapSynchronization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Builder.h"
#include "Synchronizer.h"
#include "DeleterWithPreservationOfOrder.h"
#include "DeleterWithoutPreservationOfOrder.h"

#include <memory>

int main()
{
	Builder builder(100);
	auto sync_vector = builder.GenerateFillVector();
	auto sync_map = builder.GenerateFillMap();
	std::unique_ptr<Deleter>deleter(new DeleterWithPreservationOfOrder());
	deleter->DeleteRandomElementsFromVector(sync_vector);
	deleter->DeleteRandomElementsFromMap(sync_map);
	Synchronizer().Synchronize(sync_vector, sync_map);
    return 0;
}


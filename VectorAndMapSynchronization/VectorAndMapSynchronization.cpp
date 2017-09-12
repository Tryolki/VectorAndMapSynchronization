// VectorAndMapSynchronization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Builder.h"
#include "Synchronizer.h"
#include "Deleter.h"
int main()
{
	Builder builder(100);
	auto sync_vector = builder.GenerateFillVector();
	auto sync_map = builder.GenerateFillMap();
	Deleter().DeleteRandomElementsFromVector(sync_vector);
	Deleter().DeleteRandomElementsFromMap(sync_map);
	Synchronizer().Synchronize(sync_vector, sync_map);
    return 0;
}


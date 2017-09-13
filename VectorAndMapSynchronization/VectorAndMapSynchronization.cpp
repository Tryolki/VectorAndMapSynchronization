// VectorAndMapSynchronization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Builder.h"
#include "Synchronizer.h"
#include "Builder.h"
#include <memory>

int main()
{
	Builder builder(100, "With");
	auto sync_object = builder.BuildObject();
	sync_object->Synchronize();
	auto sync_map = sync_object->GetMap();
	auto sync_vec = sync_object->GetVector();

    return 0;
}


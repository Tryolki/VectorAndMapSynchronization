// VectorAndMapSynchronization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Builder.h"
#include "Synchronizer.h"

int main()
{
	Builder builder(100);
	auto suncVector = builder.GenerateFillVector();
	auto suncMap = builder.GenerateFillMap();
	Synchronizer().Synchronize(suncVector, suncMap);
    return 0;
}


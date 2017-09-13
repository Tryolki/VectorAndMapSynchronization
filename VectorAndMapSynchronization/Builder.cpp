#include "stdafx.h"
#include "Builder.h"
#include <ctime>

Builder::Builder(size_t elementsCount, std::string type)
{
	sync_type = type;
	filler = new Filler(elementsCount);
	generator = new Generator();
	srand(time(NULL));

}

void Builder::BuildObject()
{
	vector_for_synchronization = GenerateFillVector();
	map_for_synchronization = GenerateFillMap();
	deleter = DeleterFactoryObject::GenerateObject(sync_type);
	if (!deleter)
		throw new std::invalid_argument("Incorrect type");
	deleter->DeleteRandomElementsFromVector(vector_for_synchronization);
	deleter->DeleteRandomElementsFromMap(map_for_synchronization);
	synchronizer = SynchronizerFactory::Synchronize(sync_type);
}

void Builder::Synchronize()
{
	synchronizer->Synchronize(vector_for_synchronization, map_for_synchronization);
}

Builder::~Builder()
{
	if (!filler)
	{
		delete filler;
	}
	if (!deleter)
	{
		delete deleter;
	}
	if (!generator)
	{
		delete generator;
	}
	if (!synchronizer)
	{
		delete synchronizer;
	}
}

std::vector<int> Builder::GenerateFillVector()
{
	std::vector<int> tmpVector;
	filler->FillVector(tmpVector);
	return tmpVector;
}

std::map<int, int> Builder::GenerateFillMap()
{
	std::map<int, int> tmpMap;
	filler->FillMap(tmpMap);
	return tmpMap;
}

#include "stdafx.h"
#include "Builder.h"

Builder::Builder(size_t elementsCount, std::string type)
{
	sync_type = type;
	filler = new Filler(elementsCount);
	deleter = DeleterFactoryObject::GenerateObject(sync_type);
	generator = new Generator();
}

Synchronizer * Builder::BuildObject()
{
	try
	{
		auto sync_vector = GenerateFillVector();
		auto sync_map = GenerateFillMap();
		if (!deleter)
			throw new std::invalid_argument("Incorrect type");
		deleter->DeleteRandomElementsFromVector(sync_vector);
		deleter->DeleteRandomElementsFromMap(sync_map);
		auto sync_object = SynchronizerFactory::GenerateObject(sync_type, sync_vector, sync_map);
		if (!sync_object)
			throw new std::invalid_argument("Incorrect type");
		return sync_object;
	}
	catch (const std::invalid_argument& e)
	{

	}


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

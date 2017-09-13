#pragma once
#include "Filler.h"
#include "Deleter.h"
#include "SynchronizerFactory.h"
#include "Generator.h"
#include "DeleterFactoryObject.h"

class Builder
{
public:
	Builder(size_t elements_count, std::string type = "With");
	Synchronizer * BuildObject();
	~Builder();
private:
	Filler* filler = nullptr;
	Deleter* deleter = nullptr;
	Generator* generator = nullptr;
	std::string sync_type = "";
	std::vector<int> GenerateFillVector();
	std::map<int, int> GenerateFillMap();
};


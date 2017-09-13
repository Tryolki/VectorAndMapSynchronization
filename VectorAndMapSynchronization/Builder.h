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
	void BuildObject();
	void Synchronize();
	std::vector<int> GetVector() { return vector_for_synchronization; }
	std::map<int, int> GetMap() { return map_for_synchronization; }
	~Builder();
private:
	Filler* filler = nullptr;
	Deleter* deleter = nullptr;
	Generator* generator = nullptr;
	Synchronizer * synchronizer = nullptr;
	std::string sync_type = "";
	std::vector<int> vector_for_synchronization;
	std::map<int, int> map_for_synchronization;
	std::vector<int> GenerateFillVector();
	std::map<int, int> GenerateFillMap();

};


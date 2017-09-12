#pragma once
#include "Filler.h"
#include "Generator.h"
#include "OneToNineGenerator.h"
#include <vector>
#include <map>

class Builder
{
public:
	Builder(size_t elementsCount);
	~Builder();
	std::vector<int> GenerateFillVector();
	std::map<int, int> GenerateFillMap();
private:
	Generator * generator = nullptr;
	Filler * filler = nullptr;
};


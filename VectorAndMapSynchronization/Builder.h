#pragma once
#include "Filler.h"
#include "Generator.h"

class Builder
{
public:
	Builder(size_t elements_count);
	~Builder();
	std::vector<int> GenerateFillVector();
	std::map<int, int> GenerateFillMap();
private:
	Filler * filler = nullptr;
};


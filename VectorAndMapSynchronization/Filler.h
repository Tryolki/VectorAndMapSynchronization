#pragma once
#include "Generator.h"
#include <vector>
#include <map>

class Filler
{
public:
	Filler( size_t count, size_t max_element_value = 9) :  elements_count(count), max_value(max_element_value){}
	void FillVector(std::vector<int> & filling_vector);
	void FillMap(std::map<int, int> & fillingMap);
	~Filler();
private:
	size_t elements_count;
	size_t max_value;

};


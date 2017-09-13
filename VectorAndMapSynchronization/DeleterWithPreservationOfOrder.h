#pragma once
#include "Deleter.h"

class DeleterWithPreservationOfOrder : public Deleter
{
public:
	void DeleteRandomElementsFromVector(std::vector<int>& container) override;
	void DeleteRandomElementsFromMap(std::map<int, int>& container) override;
};


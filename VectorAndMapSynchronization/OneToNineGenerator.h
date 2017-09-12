#pragma once
#include "Generator.h"
#include <stdlib.h> 

class OneToNineGenerator : public Generator
{
public:
	size_t GenerateValue() override;
};


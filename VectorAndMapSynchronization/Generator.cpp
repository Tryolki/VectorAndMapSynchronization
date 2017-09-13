#include "stdafx.h"
#include "Generator.h"


size_t Generator::GenerateRandomValue(size_t range)
{
	return rand() % range;
}

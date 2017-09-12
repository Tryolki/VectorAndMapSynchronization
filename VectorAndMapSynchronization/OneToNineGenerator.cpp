#include "stdafx.h"
#include "OneToNineGenerator.h"

size_t OneToNineGenerator::GenerateValue()
{
	return rand()%10 + 1;
}

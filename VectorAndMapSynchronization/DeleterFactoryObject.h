#pragma once
#include "stdafx.h"
#include "DeleterWithoutPreservationOfOrder.h"
#include "DeleterWithPreservationOfOrder.h"
static class DeleterFactoryObject
{
public:
	static Deleter * GenerateObject(std::string type);
};


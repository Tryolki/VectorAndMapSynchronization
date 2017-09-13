#include "stdafx.h"
#include "DeleterFactoryObject.h"

Deleter * DeleterFactoryObject::GenerateObject(std::string type)
{
	if (type == "With")
	{
		return new DeleterWithPreservationOfOrder();
	}
	if (type == "Without")
	{
		return new DeleterWithoutPreservationOfOrder();
	}
	return nullptr;
}

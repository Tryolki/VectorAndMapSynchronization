// VectorAndMapSynchronization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Builder.h"
#include <memory>
#include <iostream>
#include <sstream>
#include "VectorAndMapSynchronization.h"
#include <ctype.h>


std::string Help() {
	std::stringstream stream;
	stream << "Synchronize service" << std::endl;
	stream << "This service have two type of the container synchronization" << std::endl;
	stream << "With preservation and without preservation" << std::endl;
	stream << "You need enter count and type for container synchronization(With or Without)" << std::endl;
	return stream.str();
}

int main()
{
	std::cout << Help();
	try
	{
		Synchronization();
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception&)
	{
		std::cout << "Enternal error" << std::endl;
	}
	std::cin.get();
    return 0;
}

void Synchronization()
{
	std::size_t elements_count = 0;
	std::string type = "";
	std::cout << "Enter elements count: " << std::endl;
	std::cin >> elements_count;
	if (std::cin.fail())
	{
		std::cin.clear();
		throw new std::invalid_argument("Input was not an integer");
	}
	std::cout << "Enter preservation type: " << std::endl;
	std::cin >> type;
	Builder builder(elements_count, type);
	builder.BuildObject();
	auto sync_map = builder.GetMap();
	auto sync_vec = builder.GetVector();
}


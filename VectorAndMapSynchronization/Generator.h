#pragma once
class Generator
{
public:
	Generator();
	virtual ~Generator();
	virtual size_t GenerateValue() = 0;

};


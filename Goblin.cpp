#include "Goblin.h"
#include <iostream>

AGoblin::AGoblin()
{
}

AGoblin::~AGoblin()
{
}

void AGoblin::Move()
{
	std::cout << "AGoblin::";

	AActor::Move();
}
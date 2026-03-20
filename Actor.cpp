#include "Actor.h"
#include <iostream>


AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Move()
{
	std::cout << "AActor::Move()" << std::endl;
}

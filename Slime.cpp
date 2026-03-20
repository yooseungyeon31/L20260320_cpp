#include "Slime.h"
#include <iostream>

ASlime::ASlime()
{

}


ASlime::~ASlime()
{

}

void ASlime::Move()
{
	std::cout << "ASlime::";

	AActor::Move();
}
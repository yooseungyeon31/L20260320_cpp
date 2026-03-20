#include "World.h"

UWorld::UWorld() 
	: PlayerCount(0), GoblinCount(0), SlimeCount(0),WildBoarCount(0),
	Player(nullptr), Goblins(nullptr), WildBoars(nullptr), Slimes(nullptr)
{
	
}

UWorld::~UWorld()
{
}

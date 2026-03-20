#pragma once
#include "Engine.h"

class UWorld
{

public:
	UWorld();
	~UWorld();

	class APlayer* Player;
	class AGoblin* Goblins;
	class ASlime* Slimes;
	class WildBoar* WildBoars;

	int GoblinCount = 0;
	int SlimeCount = 0;
	int PlayerCount = 0;
	int WildBoarCount = 0;
};


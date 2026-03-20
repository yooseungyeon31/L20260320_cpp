#pragma once

#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	void Move(); //움직일 수 있다.함수로
	void GoldDrop(); //골드 드랍한다. 함수로
	void GetGold(); //골드 모은다. 함수로
	void PlayerAttack();//플레이어 공격한다.
	~APlayer();

	
	
};


#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	~APlayer();

	
	void Die(); 
	void Collect(); //골드 모은다. 함수로
	void Attack();//플레이어 공격한다.

	int Gold;
	

	
	
};


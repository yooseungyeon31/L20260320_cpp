#include <iostream>
#include "time.h"
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

//-----------------------------------------
/*우리는 엔진을 만들려고 합니다.
엔진은 World를 가지고 있고 우리 엔진 2D좌표계를 사용합니다. 
세상에는 플레이어와 몬스터가 있습니다.
몬스터에는 멧돼지, 슬라임, 고블린이 있습니다. 
플레이와 몬스터는 움직일 수 있습니다. 플레이어와 몬스터는 서로 공격을 할 수 있고
플레이어가 몬스터를 잡으면 골드를 드랍합니다. 플레이어는 골드를 모을 수 있습니다.
*/
//-------------------------------------------
//명사: 엔진, World, 몬스터, 플레이어, 멧돼지, 슬라임, 고블린, 골드
//동사: 있습니다, 가지고 있다. 움직일 수 있다. 공격한다.드랍한다ㅏ. 모은다.
//--------------------------------------------
//엔진의 기능: initialize, Run, Terminate, input,  tick, Render

int main()
{
	//UEngine* MyEngine = new UEngine(); //엔진에 새로운 엔진을 생성해주고
	//MyEngine->Run(); //엔진을 실행하고
	//
	//delete MyEngine; //삭제해준다
	//MyEngine = nullptr;

	//APlayer* MyPlayer = nullptr;//이거는 아무것도 안나오나.
	//APlayer* MyPlayer = new APlayer(); //메모리 리크

	//delete MyPlayer;
	//MyPlayer = nullptr;
	 

/*	APlayer MyActor;
	MyActor.Move();*/ //플레이어의 부모가 엑터이므로 엑터가 가진 함수를 
	//플레이어도 가지고 있게 된다. (상속) 그래서 APPLayer 안에 무브가 없어도
	//무브가 출력이 된다.


	//총 10마리 안에서 각 몬스터들이 랜덤으로 생성되게 하기. 각각 필수로 생겨야하는
	//갯수 조건으로 설정. 멧돼지 - 10마리 이하, 고블린- 5마리이하, 슬라임 4마리 이하

	srand(time(nullptr));

	AWildBoar* WildBoars = nullptr;
	AGoblin* Goblins = nullptr;
	ASlime* Slimes = nullptr;

	int WildBoarCount = rand() % 9 + 1;
	int GoblinCount = rand() % 5 + 1;
	int SlimeCount = rand() % 6 + 1;

	WildBoars= new AWildBoar[WildBoarCount];
	Goblins = new AGoblin[GoblinCount];
	Slimes = new ASlime[SlimeCount];



		for (int i = 0; i < WildBoarCount; i++)
		{
			WildBoars[i].Move();
		}
		for (int i = 0; i < GoblinCount; i++)
		{
			Goblins[i].Move();
		}
		for (int i = 0; i < SlimeCount; i++)
		{
			Slimes[i].Move();
		}
		
		delete[] WildBoars;
		delete[] Goblins;
		delete[] Slimes;
	
	
	
	return 0;
}
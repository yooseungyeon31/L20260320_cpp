#pragma once
class UWorld;


class UEngine//엔진이 세상을 상속
{
public:
	UEngine();
	~UEngine();


	void Init();
	void Run();
	void Term();

	void Input();
	void Tick();
	void Render(); 
	UWorld* World;//나중에 연결해서 써라~ 

	bool bIsRunning;


};


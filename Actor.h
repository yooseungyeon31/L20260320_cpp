#pragma once
class AActor
{
public:
	AActor();
	~AActor();

protected:
	int X;
	int Y;

public:
	int GetX();
	//void SetX(int InX);
	int GetY();
	void SetY(int InY);

	virtual void Move();

	//virtual void BeginPlay();
	//virtual void Tick();
	//virtual void Render();
};
#pragma once
#include "Define.h"

class MapEdit;

class MainGame
{
private:
	HDC hdc; // 게임 내 객체를 그릴 때 사용될 hdc
	MapEdit* mapEdit;

public:
	void Initialize(); // 초기화
	void Update(); // 게임 내 연산
	void Render(); // 그리기
	void Release(); // 메모리 해제

public:
	MainGame();
	~MainGame();
};


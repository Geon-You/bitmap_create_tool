#pragma once
#include "framework.h"

#define WIN_SIZE_X 800
#define WIN_SIZE_Y 600

extern HWND g_hWnd;

// 특정 객체를 그릴 때, 위치와 사이즈가 필요
// 그럼 그 때 마다 위치와 사이즈를 매번 새로 선언하기 귀찮으니까
// 자주 사용되는 데이터를 구조체로 만들어 처리
typedef struct tagInfo
{
	int posX;
	int posY;
	int sizeX;
	int sizeY;
}INFO;

// 타일 프리셋 수
const int TILE_PRESET_CNT = 24;

const bool TILE_COLLISION_INFO[] =
{
	false, false, true,  false, false,
	false, false, false, false, false,
	false, false, false, false, false,
	false, false, false, false, false,
	false, false, false, false,
};

// 타일 하나의 사이즈
const int TILE_SIZE_X = 64;
const int TILE_SIZE_Y = 64;

// cnt X * cnt Y 로 맵의 크기가 결정
const int TILE_CNT_X = 30;
const int TILE_CNT_Y = 30;

typedef struct tagTile
{
	// 타일 위치
	float posX;
	float posY;
	// 타일 사이즈
	float sizeX;
	float sizeY;
	// 텍스처 번호
	int drawId;
	// 해당 타입이 충돌 가능한지, 아닌지
	bool isColl;
}TILE;

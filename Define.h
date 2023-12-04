#pragma once
#include "framework.h"

#define WIN_SIZE_X 800
#define WIN_SIZE_Y 600

extern HWND g_hWnd;

// Ư�� ��ü�� �׸� ��, ��ġ�� ����� �ʿ�
// �׷� �� �� ���� ��ġ�� ����� �Ź� ���� �����ϱ� �������ϱ�
// ���� ���Ǵ� �����͸� ����ü�� ����� ó��
typedef struct tagInfo
{
	int posX;
	int posY;
	int sizeX;
	int sizeY;
}INFO;

// Ÿ�� ������ ��
const int TILE_PRESET_CNT = 24;

const bool TILE_COLLISION_INFO[] =
{
	false, false, true,  false, false,
	false, false, false, false, false,
	false, false, false, false, false,
	false, false, false, false, false,
	false, false, false, false,
};

// Ÿ�� �ϳ��� ������
const int TILE_SIZE_X = 64;
const int TILE_SIZE_Y = 64;

// cnt X * cnt Y �� ���� ũ�Ⱑ ����
const int TILE_CNT_X = 30;
const int TILE_CNT_Y = 30;

typedef struct tagTile
{
	// Ÿ�� ��ġ
	float posX;
	float posY;
	// Ÿ�� ������
	float sizeX;
	float sizeY;
	// �ؽ�ó ��ȣ
	int drawId;
	// �ش� Ÿ���� �浹 ��������, �ƴ���
	bool isColl;
}TILE;

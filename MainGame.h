#pragma once
#include "Define.h"

class MapEdit;

class MainGame
{
private:
	HDC hdc; // ���� �� ��ü�� �׸� �� ���� hdc
	MapEdit* mapEdit;

public:
	void Initialize(); // �ʱ�ȭ
	void Update(); // ���� �� ����
	void Render(); // �׸���
	void Release(); // �޸� ����

public:
	MainGame();
	~MainGame();
};


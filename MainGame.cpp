#include "MainGame.h"
#include "MapEdit.h"

void MainGame::Initialize()
{
	srand(GetTickCount64());
	// ���� ������ �ڵ��� ���� dc�� �����´�
	hdc = GetDC(g_hWnd);

	mapEdit = new MapEdit();
	mapEdit->Initialize();
}

void MainGame::Update()
{
	mapEdit->Update();
}

void MainGame::Render()
{
	mapEdit->Render(hdc);
}

void MainGame::Release()
{
	// �����Դ� dc�� �ý��ۿ� ��ȯ (����)
	ReleaseDC(g_hWnd, hdc);

	if (mapEdit)
	{
		delete mapEdit;
		mapEdit = nullptr;
	}
}

MainGame::MainGame()
{
}

MainGame::~MainGame()
{
	Release();
}

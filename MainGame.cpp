#include "MainGame.h"
#include "MapEdit.h"

void MainGame::Initialize()
{
	srand(GetTickCount64());
	// 전역 윈도우 핸들을 통해 dc를 가져온다
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
	// 가져왔던 dc를 시스템에 반환 (해제)
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

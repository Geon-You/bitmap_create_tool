#include "Bitmap.h"

Bitmap* Bitmap::LoadBmp(const WCHAR* filePath)
{
	// �����쿡�� �⺻ dc�� ������
	hdc = GetDC(g_hWnd);
	// dc�� �ϳ� ������
	memDC = CreateCompatibleDC(hdc);

	// �Ķ���ͷ� ���� bmp ��θ� ���� �̹����� �ҷ���
	bitmap = (HBITMAP)LoadImage(NULL, filePath, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);

	// memDC�� �ҷ��� bitmap�� �����ϰ�, memDC�� ������ ��� �ִ�
	// bmp�� oldBitmap�� ��Ƶ�
	oldBitmap = (HBITMAP)SelectObject(memDC, bitmap);

	// hdc�� ���� �����ϱ� ���� �뵵�� ��������
	// memDC�� ���������� hdc�� ����� �������Ƿ� ��ȯ
	ReleaseDC(g_hWnd, hdc);

	// ��Ʈ�� �ν��Ͻ� �ڱ� �ڽ��� ��ȯ
	// ��� �ش� �ν��Ͻ��� memDC���� �׸����� �ϴ� bitmap�� ����
	return this;
}

void Bitmap::Release()
{
	SelectObject(memDC, oldBitmap);
	DeleteObject(bitmap);
	DeleteDC(memDC);
}

Bitmap::Bitmap()
{
}

Bitmap::~Bitmap()
{
	Release();
}

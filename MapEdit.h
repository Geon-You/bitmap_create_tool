#pragma once
#include "Object.h"

class Bitmap;

class MapEdit :
    public Object
{
private:
    // ��ü�� ����, ���Ű� ����ϴٸ� list
    // ��ü�� ���� ��� ���� ������ �ְ� ��ü�� �����Ͽ� �����ϰ� �ʹٸ� vector
    vector<TILE*> tiles;
    vector<Bitmap*> bmps;

    // ���� ������ Ÿ�� �������� �ε���
    int selectedTile;
    // ȭ�� ��ũ�Ѹ��� ����� x, y
    float scrollX;
    float scrollY;
    // Ÿ�� ������ x�� ��ũ�ѿ� ����� ��
    float presetScrollX;
    // ��ũ�� �ӵ�
    float speed;

public:
    // Object��(��) ���� ��ӵ�
    void Initialize() override;
    void Update() override;
    void Render(HDC hdc) override;
    void Release() override;

public:
    void InitTile(); // �ʱ� Ÿ�� ���� ���
    TILE* CreateTile(float x, float y); // Ÿ�� ���� ���
    void Picking(int drawId); // �� ���� Ư�� Ÿ���� Ŭ�� ��, ������ ���� ���� �����ϴ� ���
    void SelectPreset(); // ������ �������� Ư�� Ÿ�� ������ ���� ��, �ش� Ÿ�� ������ �ε��� ���� ���
    void CheckKey();
    void Scroll();
    void SaveMap();
    void LoadMap();

public:
    MapEdit();
    virtual ~MapEdit();
};


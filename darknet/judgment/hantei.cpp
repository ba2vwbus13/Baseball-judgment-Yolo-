#include <stdio.h>
#include <math.h>

// 矩形データ
typedef struct
{
	float m_PosX;		// X座標
	float m_PosY;		// Y座標
	float m_Width;		// 横幅
	float m_Height;		// 縦幅
} Rect_a;

// 点データ
typedef struct
{
	float m_PosX;		// X座標
	float m_PosY;		// Y座標
	float m_Width;		// 横幅
	float m_Height;		// 縦幅
} Rect_b;

bool OnCollisionRect_aAndRect_b(Rect_a rect_a, Rect_b rect_b)
{
	// 点が矩形の中にあるかチェック
	if ((rect_a.m_PosX - rect_b.m_PosX) < rect_a.m_Width/2.0f + rect_b.m_Width/2.0f &&
		(rect_a.m_PosY - rect_b.m_PosY) < rect_a.m_Height/2.0f + rect_b.m_Height/2.0f )
	{
		return true;
	}

	return false;
}

void main(void)
{
	// 点の情報
	Rect_a rect_a = {
		0.0f,
		0.0f,
		10.0f,
		10.0f,
	};
			
	// 矩形の情報
	Rect_b rect_b = {
		15.0f,
		15.0f,
		25.0f,
		25.0f,
	};

	if (OnCollisionRect_aAndRect_b(rect_a, rect_b) == true)
	{
		printf("BALL\n");
	}
	else
	{
		printf("BALL\n");
	}

	getchar();
}
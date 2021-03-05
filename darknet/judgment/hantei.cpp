#include <stdio.h>
#include <math.h>

// ��`�f�[�^
typedef struct
{
	float m_PosX;		// X���W
	float m_PosY;		// Y���W
	float m_Width;		// ����
	float m_Height;		// �c��
} Rect_a;

// �_�f�[�^
typedef struct
{
	float m_PosX;		// X���W
	float m_PosY;		// Y���W
	float m_Width;		// ����
	float m_Height;		// �c��
} Rect_b;

bool OnCollisionRect_aAndRect_b(Rect_a rect_a, Rect_b rect_b)
{
	// �_����`�̒��ɂ��邩�`�F�b�N
	if ((rect_a.m_PosX - rect_b.m_PosX) < rect_a.m_Width/2.0f + rect_b.m_Width/2.0f &&
		(rect_a.m_PosY - rect_b.m_PosY) < rect_a.m_Height/2.0f + rect_b.m_Height/2.0f )
	{
		return true;
	}

	return false;
}

void main(void)
{
	// �_�̏��
	Rect_a rect_a = {
		0.0f,
		0.0f,
		10.0f,
		10.0f,
	};
			
	// ��`�̏��
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
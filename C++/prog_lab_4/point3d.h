#pragma once
#include "point.h"
using namespace std;
class point3d : public point//����������� �����
{
	float z = 0;
public:
	void vvod() override;
	float distance(point3d pt);//���������� ������ �������� ������ � ����������� ��� ������ ������ �������� ������
	void init(float x, float y, float z);//���������� ������ �������� ������ � ����������� � ������� ������ �������� ������
	point3d& operator = (point& pt);//���������� ��������� ������������ ������� ������������ ������ �������� �������� ������
	friend ostream& operator<<(ostream& s, const point3d& pt);//�������� <<
};


#define _CRT_SECURE_NO_WARNINGS
#include "point3d.h"
#include "point.h"
#include "Math.h"
#include <iostream>

void point3d::vvod()
{
	while (scanf("%f%f%f", &x, &y, &z) < 3) {
		while (getchar() != '\n');
		printf("���������� ����� ������� �������.\n");
	}
	return;
}

float point3d::distance(point3d pt)//���������� ������ �������� ������ � �����������
{
	return sqrt(pow((pt.x - this->x), 2) + pow((pt.y - this->y), 2) + pow((pt.z - this->z), 2));
}

void point3d::init(float x, float y, float z)//���������� ������ �������� ������ � �����������
{
	((point*)this)->init(x, y);//� ������� ������ �������� ������
	this->z = z;
}

point3d& point3d::operator=(point& pt)////���������� ��������� ������������ ������� ������������ ������ �������� �������� ������
{
	this->x = pt.getx();
	this->y = pt.gety();
	return *this;
}

ostream& operator<<(ostream& s, const point3d& pt)//�������� <<
{
	s << "x = " << pt.x << ", y = " << pt.y << ", z = " << pt.z;
	return s;
}
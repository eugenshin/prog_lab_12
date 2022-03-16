#include <Windows.h>
#include <iostream>
#include "line.h"
#include "angle.h"
#include "triangle.h"
#include "circle.h"
#include "segments.h"
#include "figure.h"
#include "point3d.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	point3d pt1, pt2;
	pt2.init(1, 1, 1);//���������� ������ �������� ������ � ����������� � ������� ������ �������� ������
	float x = pt1.distance(pt2);//���������� ������ �������� ������ � ����������� ��� ������ ������ �������� ������
	cout << "���������� ����� ������� " << x << endl;
	circle c1(0, 0, 1);//� ������������ ������������ ������ � ����������� ����� ������������ �������� ������
	point pt3(2, 3);
	pt2 = pt3;//���������� ��������� ������������ ������� ������������ ������ �������� �������� ������
	cout << "�����: " << pt2 << endl;//�������� <<
	pt3.totalvvod();//����� ����������� ������� �� ����������� �������� �������� ������
	point* pt4 = new point();
	point3d* pt5 = new point3d();
	pt4->vvod();//����� ����������� ������� ����� ������������ ������� �������� ������ ����� ������������ ���������
	pt5->vvod();//����� ����������� ������� ����� ������������ ������� ������������ ������ ����� ������������ ���������
	return 0;
}
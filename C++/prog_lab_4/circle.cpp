#define _CRT_SECURE_NO_WARNINGS
#include "circle.h"
#include <iostream>
#define PI 3.14159265

circle::circle():figure(1) {
}

circle::circle(float x, float y, float r) : figure(1) {//����� � ������������ ������������ ������ � ����������� ����� ������������ �������� ������
	pt[0].init(x, y);
	radius = r;
}

void circle::vvod()
{
	printf("������� ���������� ������ ����������: ");
	pt[0].vvod();
	printf("������� ������ ������� ����������: ");
	while (scanf("%f", &radius) < 1) {
		while (getchar() != '\n');
		printf("������ ������ �������.");
	}
}

void circle::vivod()
{
	printf("����� ����������: %.3f %.3f\n������ ����������: %.3f", pt[0].getx(), pt[0].gety(), radius);
}

float circle::square()
{
	return radius*radius*PI;
}

float circle::per()
{
	return 2*PI*radius;
}
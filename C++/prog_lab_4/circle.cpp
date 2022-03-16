#define _CRT_SECURE_NO_WARNINGS
#include "circle.h"
#include <iostream>
#define PI 3.14159265

circle::circle():figure(1) {
}

circle::circle(float x, float y, float r) : figure(1) {//вызов в конструкторе производного класса с параметрами вызов конструктора базового класса
	pt[0].init(x, y);
	radius = r;
}

void circle::vvod()
{
	printf("Введите координаты центра окружности: ");
	pt[0].vvod();
	printf("Введите длинну радиуса окружности: ");
	while (scanf("%f", &radius) < 1) {
		while (getchar() != '\n');
		printf("Радиус введен неверно.");
	}
}

void circle::vivod()
{
	printf("Центр окружности: %.3f %.3f\nРадиус окружности: %.3f", pt[0].getx(), pt[0].gety(), radius);
}

float circle::square()
{
	return radius*radius*PI;
}

float circle::per()
{
	return 2*PI*radius;
}
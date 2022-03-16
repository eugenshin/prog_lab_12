#define _CRT_SECURE_NO_WARNINGS
#include "point.h"
#include <iostream>
#include <math.h>

point::point()
{
	x = y = 0;
}

point::point(float x)
{
	this->x = this->y = x;
}

point::point(float x, float y)
{
	this->x = x;
	this->y = y;
}

void point::vvod()
{
	while (scanf("%f%f", &x, &y) < 2) {
		while (getchar() != '\n');
		printf("Координаты точки введены неверно.\n");
	}
	return;
}

void point::vivod()
{
	printf("x=%.3f, y=%.3f", x, y);
}

float point::distance(point* sdpoint)
{
	return sqrt(pow(sdpoint->x - x, 2) + pow(sdpoint->y - y, 2));
}

float point::getx()
{
	return x;
}

float point::gety()
{
	return y;
}

void point::descrin()
{
	std::cin >> description;
}

void point::descrout()
{
	std::cout << description;
}

void point::init(float x, float y)
{
	this->x = x;
	this->y = y;
}

void point::totalvvod()
{
	this->vvod();//вызов виртуальной функции не виртуальной функцией базового класса
	this->descrin();
}

point point::operator+(point b)
{
	point c;
	c.x = x + b.x;
	c.y = y + b.y;
	return c;
}

point point::operator++(int)
{
	x++;
	return point();
}

point point::operator++()
{
	y++;
	return point();
}

ostream& operator<<(ostream& s, const point& pt)
{
	s << "x = " << pt.x << ", y = " << pt.y;
	return s;
}

void pround(point& point)
{
	point.x = round(point.x);
	point.y = round(point.y);
}

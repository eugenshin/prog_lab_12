#define _CRT_SECURE_NO_WARNINGS
#include "point3d.h"
#include "point.h"
#include "Math.h"
#include <iostream>

void point3d::vvod()
{
	while (scanf("%f%f%f", &x, &y, &z) < 3) {
		while (getchar() != '\n');
		printf(" оординаты точки введены неверно.\n");
	}
	return;
}

float point3d::distance(point3d pt)//перегрузка метода базового класса в производном
{
	return sqrt(pow((pt.x - this->x), 2) + pow((pt.y - this->y), 2) + pow((pt.z - this->z), 2));
}

void point3d::init(float x, float y, float z)//перегрузка метода базового класса в производном
{
	((point*)this)->init(x, y);//с вызовом метода базового класса
	this->z = z;
}

point3d& point3d::operator=(point& pt)////перегрузка оператора присваивани€ объекту производного класса объектов базового класса
{
	this->x = pt.getx();
	this->y = pt.gety();
	return *this;
}

ostream& operator<<(ostream& s, const point3d& pt)//операци€ <<
{
	s << "x = " << pt.x << ", y = " << pt.y << ", z = " << pt.z;
	return s;
}
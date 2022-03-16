#pragma once
#include "point.h"
using namespace std;
class point3d : public point//производный класс
{
	float z = 0;
public:
	void vvod() override;
	float distance(point3d pt);//перегрузка метода базового класса в производном без вызова метода базового класса
	void init(float x, float y, float z);//перегрузка метода базового класса в производном с вызовом метода базового класса
	point3d& operator = (point& pt);//перегрузка оператора присваивания объекту производного класса объектов базового класса
	friend ostream& operator<<(ostream& s, const point3d& pt);//операция <<
};


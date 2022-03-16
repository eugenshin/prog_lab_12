#define _CRT_SECURE_NO_WARNINGS
#include "triangle.h"
#include <iostream>
#include "angle.h"
#include <math.h>

triangle::triangle():figure(3) {
}

void triangle::vvod()
{
	pt[0].vvod();
	pt[1].vvod();
	pt[2].vvod();
	return;
}

void triangle::vivod()
{
	printf("Первая точка треугольника: %.3f %.3f\nВторая точка треугольника: %.3f %.3f\nТретья точка треугольника: %.3f %.3f", pt[0].getx(), pt[0].gety(), pt[1].getx(), pt[1].gety(), pt[2].getx(), pt[2].gety());
}

float triangle::square()
{
	return abs((pt[1].getx() - pt[0].getx()) * (pt[2].gety() - pt[0].gety()) - (pt[2].getx() - pt[0].getx()) * (pt[1].gety() - pt[0].gety())) / 2;
}

float triangle::per()
{
	return pt[0].distance(&pt[1]) + pt[1].distance(&pt[2]) + pt[2].distance(&pt[0]);
}
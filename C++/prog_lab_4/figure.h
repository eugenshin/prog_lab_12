#pragma once
#include "point.h"
class figure//����������� �����
{
protected://����������� protected
	point* pt;
public:
	figure(int n);
	virtual void vvod() = 0;
	virtual void vivod() = 0;
	virtual float square() = 0;
	virtual float per() = 0;
};
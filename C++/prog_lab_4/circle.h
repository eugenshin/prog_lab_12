#pragma once
#include "point.h"
#include "figure.h"
struct circle : public figure//����������� �����
{
	float radius = 0;
public:
	circle();
	circle(float x, float y, float r);
	void vvod() override;
	void vivod() override;
	float square() override;
	float per() override;
};
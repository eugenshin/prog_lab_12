#pragma once
#include "point.h"
#include "figure.h"
struct triangle : public figure//����������� �����
{
public:
	triangle();
	void vvod() override;
	void vivod() override;
	float square() override;
	float per() override;
};
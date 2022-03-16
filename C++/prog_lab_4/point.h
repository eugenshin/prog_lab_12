#pragma once
#include<String>
using namespace std;

class point
{
protected://модификатор protected
	std::string description;
	float x, y;
public:
	virtual void vvod();
	void vivod();
	float distance(point* sdpoint);
	float getx();
	float gety();
	void descrin();
	void descrout();
	void init(float x, float y);
	friend void pround(point& point);
	void totalvvod();
	point operator + (point b);
	point operator ++  (int);
	point operator ++ ();
	friend ostream& operator<<(ostream& s, const point& pt);
	point();
	point(float x);
	point(float x, float y);
};
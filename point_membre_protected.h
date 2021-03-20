#pragma once
class point
{
protected:
	int x;
	int y;
public:
	point(int, int);
	~point();
	point(point&);
};
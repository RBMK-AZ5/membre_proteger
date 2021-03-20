#include "point_membre_protected.h"
#include <iostream>
using namespace std;
point::point(int abs, int ord)
{
	x = abs;
	y = ord;
	cout << "+CP+ valeur de x et de y : " << x << " " << y << endl;
}
point::~point()
{
	cout << "-DP- valeur de x et de y : " << x << " " << y << endl;
}
point::point(point& p)
{
	x = p.x;
	y = p.y;
	cout << "+CRP+ valeur de x et de y : " << x << " " << y << endl;
}
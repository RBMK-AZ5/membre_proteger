#include "cfpoint_membre_protected.h"
#include <iostream>
using namespace std;
cfpoint::cfpoint(int abs, int ord, char c) :point(abs, ord)
{
	color = c;
	cout << "++CC++ valeur de color : " << color << endl;
}
cfpoint::~cfpoint()
{
	cout << "--DC-- valeur de color : " << color << endl;
}
cfpoint::cfpoint(cfpoint& p) :point(p)
{
	color = p.color;
	cout << "++CRC++ valeur de color : " << color << endl;
}
void cfpoint::affiche()
{
	cout << "Membre protected valeur de x et de y " << x << " " << y << endl;
	cout << "Membre protected valeur de color " << color << endl;

}
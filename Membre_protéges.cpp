#include <iostream>
#include"point_membre_protected.h"
#include "cfpoint_membre_protected.h"
using namespace std;
void fct(cfpoint);
int main()
{
	point a(6, 8);
	cfpoint b(0, 9, 'e');
	b.affiche();
	fct(b);
}
void fct(cfpoint b)
{
	cout << "Apelle de la fonction fct" << endl;
}
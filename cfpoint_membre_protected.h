#pragma once
#include "point_membre_protected.h"
class cfpoint :public point
{
private:
	char color;
public:
	cfpoint(int, int, char);
	~cfpoint();
	cfpoint(cfpoint&);
	void affiche();
};
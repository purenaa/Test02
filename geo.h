#ifndef _GEO_H_
#define _GEO_H_

#include <iostream>
#include <string>	//¹®ÀÚ¿­
using namespace std;

class GeometericFigure
{
public:
	GeometericFigure();
	GeometericFigure(const string color);
	void SetColor(const string color);
	bool IsPaint();
	string GetColor();
protected:
	string color;
};
#else
#endif
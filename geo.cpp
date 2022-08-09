//접근지정자(1) P378
#include "geo.h"

GeometericFigure::GeometericFigure()
{
	color = "white";
}

GeometericFigure::GeometericFigure(const string color) {
	this->color = color;
}

void GeometericFigure::SetColor(const string color)
{
	this->color = color;
}

bool GeometericFigure::IsPaint()
{
	return(color == "white") ? false : true;
}

string GeometericFigure::GetColor()
{
	return color;
}




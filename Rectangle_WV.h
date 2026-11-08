#ifndef RECTANGLEWV_H
#define RECTANGLEWV_H
#include "PositiveDimension.h"

class Rectangle_WV
{
private:
    double width;
    double length;

public:
    Rectangle_WV(double w, double len) : 
        width( requirePositiveDimension(w)), 
        length( requirePositiveDimension(len)) {}

    double getWidth() const { return width; }
    double getLength() const { return length; }
    double getArea() const { return width * length; }

	void setWidth(double w) { width = requirePositiveDimension(w); }
	void setLength(double len) { length = requirePositiveDimension(len); }

};
#endif 
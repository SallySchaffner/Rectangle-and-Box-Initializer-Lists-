#ifndef BOXWV_H
#define BOXWV_H
#include "Rectangle_WV.h"

class Box_WV : public Rectangle_WV
{
protected:
    double height;

public:
    Box_WV(double w, double len, double h) : 
           Rectangle_WV{ w, len }, 
           height{ requirePositiveDimension(h) } {}

    double getHeight() const { return height; }
    double getVolume() const { return getArea() * height; }

	void setHeight(double h) { height = requirePositiveDimension(h); }
};
#endif
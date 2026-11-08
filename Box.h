#ifndef BOX_H
#define BOX_H
#include "Rectangle.h"

class Box : public Rectangle
{
protected:
    double height;

public:
    // Default constructor
    Box(double w, double len, double h) : Rectangle( w, len ), height( h ) {}

    double getHeight() const { return height; }

    double getVolume() const { return getArea() * height; }
};
#endif
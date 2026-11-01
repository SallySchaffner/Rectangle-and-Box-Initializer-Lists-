#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double length;
public:
    
    Rectangle(double w, double len) : width{ w }, length{ len } {}

    double getWidth() const { return width; }

	double getLength() const { return length; }

	double getArea() const { return width * length; }
};
#endif 
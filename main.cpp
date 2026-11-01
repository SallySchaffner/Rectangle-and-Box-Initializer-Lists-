// This program demonstrates passing arguments to a base
// class constructor.
#include <iostream>
#include <limits>
#include <cmath>
#include <stdexcept>
#include "Box.h"
#include "Box_WV.h"

using namespace std;

int main()
{
	double boxWidth;   // To hold the box's width
	double boxLength;  // To hold the box's length
	double boxHeight;  // To hold the box's height

	//--------------------------------------------------
	// Create a Box object and display its properties.
	//--------------------------------------------------

	// Get the width, length, and height from the user.
	cout << "Enter the dimensions of a box:\n";
	cout << "Width: ";
	cin >> boxWidth;
	cout << "Length: ";
	cin >> boxLength;
	cout << "Height: ";
	cin >> boxHeight;

	// Define a Box object.
	Box myBox(boxWidth, boxLength, boxHeight);

	// Display the Box object's properties.
	cout << "Here are the box's properties:\n";
	cout << "Width: " << myBox.getWidth() << endl;
	cout << "Length: " << myBox.getLength() << endl;
	cout << "Height: " << myBox.getHeight() << endl;
	cout << "Base area: " << myBox.getArea() << endl;
	cout << "Volume: " << myBox.getVolume() << endl;

	
	//--------------------------------------------------------------
	// Create a Box_WV object and display its properties.
	//--------------------------------------------------------------
	
	// Get the width, length, and height from the user with validation.
	cout << "\nEnter the dimensions of a box (positive numbers only):\n";
	boxWidth = readPositiveDimension("Width: ");
	boxLength = readPositiveDimension("Length: ");
	boxHeight = readPositiveDimension("Height: ");
	
	// Define a Box_WV object.
	Box_WV myBox_WV(boxWidth, boxLength, boxHeight);

	// Display the Box_WV object's properties.
	cout << "Here are the box's properties:\n";
	cout << "Width: " << myBox_WV.getWidth() << endl;
	cout << "Length: " << myBox_WV.getLength() << endl;
	cout << "Height: " << myBox_WV.getHeight() << endl;
	cout << "Base area: " << myBox_WV.getArea() << endl;
	cout << "Volume: " << myBox_WV.getVolume() << endl;

	return 0;
}

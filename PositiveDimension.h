#include <iostream>
#include <cmath>
#include <stdexcept>


bool isPositiveDimension(double value) {
	return std::isfinite(value) && value > 0.0;
}
double requirePositiveDimension(double value) {
	if (!isPositiveDimension(value)) {
		throw std::invalid_argument("Dimension must be positive");
	}
	return value;
}
double readPositiveDimension(const std::string& prompt) {
	double value;
	while (true) {
		std::cout << prompt;
		if (std::cin >> value && isPositiveDimension(value)) {
			std::cin.ignore(
				std::numeric_limits<std::streamsize>::max(), '\n');
			return value;
		}
		std::cout << "Enter a positive number. Try again.\n";
		if (std::cin.eof()) {
			throw std::runtime_error("Input ended unexpectedly");
		}
		std::cin.clear();
		std::cin.ignore(
			std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

#include "Exercices1-4-1.h"

namespace Exercices141 {

	void Sum50to100() {
		int number = 50, final = 100, sum = 0;

		while (number <= final) {
			sum += number;
			++number;
		}

		std::cout << "Sum from 50 to 100 is: " << sum << std::endl;
	}

	void NumbersFrom10To0() {
		int number = 10;

		while (number >= 0) {
			std::cout << number << std::endl;
			--number;
		}
	}

	void PrintRange() {
		int from = 0, to = 0;

		std::cin >> from >> to;

		//We only print the range if 'from' is smaller than 'to'
		if (from >= to) {
			std::cout << "The first number must be smaller than the second one!" << std::endl;
		}
		else {
			while (from <= to) {
				std::cout << from << std::endl;
				++from;
			}
		}
	}

}
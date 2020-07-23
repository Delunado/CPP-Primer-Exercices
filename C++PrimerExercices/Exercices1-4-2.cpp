#include "Exercices1-4-2.h"

namespace Exercices142 {

	void Sum50to100() {
		int sum = 0;

		for (int i = 50; i <= 100; i++) {
			sum += i;
		}

		std::cout << sum << std::endl;
	}

	void NumbersFrom10To0() {
		for (int i = 10; i >= 0; i--) {
			std::cout << i << std::endl;
		}
	}
}
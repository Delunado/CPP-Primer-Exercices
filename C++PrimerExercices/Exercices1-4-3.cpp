#include "Exercices1-4-3.h"

namespace Exercices143 {

	void SumInput()
	{
		int sum = 0, number = 0;

		while (std::cin >> number) {
			sum += number;
		}

		std::cout << "Sum: " << sum << std::endl;
	}

}

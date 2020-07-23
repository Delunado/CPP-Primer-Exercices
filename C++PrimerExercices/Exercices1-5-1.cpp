#include "Exercices1-5-1.h"
#include "Sales_item.h"

namespace Exercices151 {

	void ReadAndWriteTransactions()
	{
		Sales_item item;

		while (std::cin >> item) {
			std::cout << item << std::endl;
		}
	}

	void SumTwoBooks()
	{
		Sales_item item1, item2;

		std::cin >> item1 >> item2;

		if (item1.isbn() == item2.isbn()) {
			std::cout << item1 + item2 << std::endl;
		}
		else {
			std::cout << "The books are not the same!" << std::endl;
		}
	}

	void SumSeveralBooks()
	{
		Sales_item item, lastItem, itemSum;

		std::cin >> item;
		lastItem = itemSum = item;

		while (std::cin >> item) {
			if (item.isbn() != lastItem.isbn())
				break;

			itemSum += item;
			lastItem = item;
		}

		std::cout << itemSum << std::endl;
	}

}
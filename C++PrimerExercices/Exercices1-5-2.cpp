#include "Exercices1-5-2.h"
#include "Sales_item.h"

namespace Exercices152 {

	void ReadAndCountTransactions()
	{
		Sales_item item, lastItem;
		int count = 1;

		std::cin >> item;
		lastItem = item;

		while (std::cin >> item) {
			if (item.isbn() == lastItem.isbn()) {
				count++;
			}
			else {
				std::cout << "The item " << lastItem.isbn() << " has appeared " << count << " times" << std::endl;
				count = 1;		
			}

			lastItem = item;
		}

		std::cout << "The item " << lastItem.isbn() << " has appeared " << count << " times" << std::endl;
	}

}
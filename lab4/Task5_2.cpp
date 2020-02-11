#include <iostream>

void Task5_2() {
	printf("\nTask 5.2\n");
	printf("\nFarmer at the beginning of winter increases\n");
	printf("the nowPrice of milk at p procent and in the summer reduces by\n");
	printf("the same percentage. whether the nowPrice change on milk\n");
	printf("and, if so, in what direction and by how much, after n years?\n");

	int nowYear;
	float nowPrice;
	float percent;
	int years;

	float onePercentPrice;
	float differencePrice;

	int firstYear;
	float firstPrice;
	float secondprice;

	std::cout << std::endl;
	std::cout << "What is the year now?\n";
	std::cin >> nowYear;
	std::cout << "Price \n";
	std::cin >> nowPrice;
	std::cout << "Percent % \n";
	std::cin >> percent;
	std::cout << "Years \n";
	std::cin >> years;

	firstPrice = nowPrice;
	firstYear = nowYear;

	for (years; years > 0; years--) {
		onePercentPrice = nowPrice / 100;
		differencePrice = onePercentPrice * percent;

		nowYear++;
		std::cout << "Year: " << nowYear << std::endl;

		nowPrice += differencePrice;
		std::cout << "Winter difference price: " << differencePrice << std::endl;
		std::cout << "Winter price :" << nowPrice << std::endl;

		onePercentPrice = nowPrice / 100;
		differencePrice = onePercentPrice * percent;

		nowPrice -= differencePrice;
		std::cout << "Summer difference price: " << differencePrice << std::endl;
		std::cout << "Summer price: " << nowPrice << std::endl << std::endl;

	}

	std::cout << "Year: " << firstYear << " price: " << firstPrice << std::endl;
	std::cout << "Year: " << nowYear << " price: " << nowPrice << std::endl;
	std::cout << "Difference : -" << firstPrice - nowPrice << std::endl << std::endl;
}
// Лабораторная работа ОАиП 1

#include <iostream>

int main()
{   
	setlocale(LC_ALL, "Russian");
	double temp;
	std::cout << "Укажите температуру:";
	std::cin >> temp;
	if (temp < 0) {
		std::cout << "Рекомендуется надеть зимнюю одежду." << std::endl;
	}
	else if (temp >= 0 && temp <= 10) {
		std::cout << "Рекомедуется надеть тёплую одежду." << std::endl;
	}
	else if (temp >= 11 && temp <= 20) {
		std::cout << "Рекомендуется надеть легкую одежду." << std::endl;
	}
	else {
		std::cout << "Рекомендуется надеть летнюю одежду." << std::endl;
	}
}
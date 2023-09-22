#include <iostream>

int Lab3() {

	// Задание 1

	setlocale(LC_ALL, "Rus");

	int a, b, c;
	
	std::cout << "Введите число A: " << std::endl;
	std::cin >> a;

	std::cout << "Введите число B: " << std::endl;
	std::cin >> b;

	std::cout << "Введите число C: " << std::endl;
	std::cin >> c;

	if ((a + b) % c == 0 && c % b == 0) {
		std::cout << ((a + b) / c) - (c / b) << std::endl;
	}
	else if ((a + b) % c == 0 && c % b != 0) {
		std::cout << (a + b) / c + c * b << std::endl;
	}
	else {
		std::cout << a - b + c << std::endl;
	}

	// Задание 2

	short n;

	std::cout << "Введиет код ошибки (0, 1, 2, 3): " << std::endl;
	std::cin >> n;

	switch (n) 
	{
		case 0:
			std::cout << "Ошибок нет" << std::endl;
			break;

		case 1:
			std::cout << "Ошибка чтения файла" << std::endl;
			break;

		case 2:
			std::cout << "Ошибка записи файла" << std::endl;
			break;

		case 3:
			std::cout << "Не все поля определены" << std::endl;
			break;

		default:
			std::cout << "Ошибка с таким кодом отсутствует" << std::endl;
			break;
	}

	//Задание 3

	short x;

	std::cout << "Введтие значение x (1 или -1): " << std::endl;
	std::cin >> x;

	switch (x)
	{
		case -1:
			std::cout << "Negative Number" << std::endl;
			break;
		case 1:
			std::cout << "Positive Number" << std::endl;
			break;
		default:
			std::cout << "Ошибка! x принимает только значения 1 или -1" << std::endl;
			break;
	}

	return 0;
}
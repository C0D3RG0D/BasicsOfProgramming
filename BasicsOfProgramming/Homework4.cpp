#include <iostream>

int Lab4() {
	setlocale(LC_ALL, "Rus");

	//Задание 1
	
	int j, sum = 0, max = -1, a, k = -1;

	std::cout << "Введите кол-во элементов последовательности" << std::endl;
	std::cin >> j;

	std::cout << "Вводите элементы последовательности" << std::endl;
	for (int i = 0; i < j; i++) {
		std::cin >> a;

		if (a % 10 == 0 || a % 10 == 7) {
			sum += a;

			max = a > max ? a : max;
			k = a == max ? i : k;
		}
		else {
			continue;
		}
	}

	std::cout << "Сумма членов последовательности оканчивающихся на 0 или 7: " << sum << std::endl;
	std::cout << "Максимальный из членов последовательности оканчивающихся на 0 или 7: " << max << std::endl;
	std::cout << "Индекс максимального числа: " << k << std::endl;


	//Задание 2

	int n, sum1 = 0;

	std::cout << "Введите число (0 < n < 10^9)" << std::endl;
	std::cin >> n;

	if (n > 1000000000) {
		std::cout << "Число n должно быть меньше 10^9!" << std::endl;
		return 1;
	}

	while (n > 0) {

		int num = n % 10;

		if ((num & 1) == 1) {

			sum1 += num;

		}

		n /= 10;
	}

	std::cout << "Сумма нечетных цифр числа: "<< sum1 << std::endl;

	return 0;
}
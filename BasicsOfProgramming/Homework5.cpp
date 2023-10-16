#include <iostream>
#include <algorithm>

const int N = 100;

//Функция для проверки числа на простоту
int isPrime(int n) {
	if (n <= 3) {
		if (n <= 1) {
			return false;
		}

		return true;
	}


	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

//Функция для нахождения первой цифры числа
int FirstNumber(int n) {
	while (n >= 9) {
		n /= 10;
	}
	return n;
}

//Функция для нахождения наименьшей цифры числа
int minNumber(int num) {
	if (num == 0) {
		return 0;
	}

	int min = 2'000'000'000;
	int n;

	while (num > 0) {
		n = num % 10;
		if (n < min) {
			min = n;
		}
		num /= 10;
	}

	return min;
}

//Функция сортировки
void Sort(int arr[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (FirstNumber(arr[j]) > FirstNumber(arr[j + 1])) {
				std::swap(arr[j], arr[j + 1]);
			}

			if (FirstNumber(arr[j]) == FirstNumber(arr[j + 1])) {
				if (minNumber(arr[j]) > minNumber(arr[j + 1])) {
					std::swap(arr[j], arr[j + 1]);
				}
			}

			if ((FirstNumber(arr[j]) == FirstNumber(arr[j + 1])) && (minNumber(arr[j]) > minNumber(arr[j + 1]))) {
				if (arr[j] > arr[j + 1]) {
					std::swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
}

//Функция для подсчета минимальной суммы строки матрицы и ее замены
void MinMatrixSum(int arr[N][N], int n, int m) {
	int min = 2'000'000'000;
	int sum = 0;
	int index = 0;

	for (int i = 0; i < n; ++i) {
		sum = 0;

		for (int j = 0; j < m; ++j) {
			sum += arr[i][j];
		}

		if (sum < min) {
			min = sum;
			index = i;
		}
	}

	for (int j = 0; j < m; ++j) {
		arr[index][j] = min;
	}
}

//Функция для проверки чисел-полидромов
bool isPalindrome(int num) {
	int originalNumber = num;
	int reversedNumber = 0;

	while (num > 0) {
		int digit = num % 10;
		reversedNumber = reversedNumber * 10 + digit;
		num /= 10;
	}

	return originalNumber == reversedNumber;
}

void CopyDel(int arr[], int& j) {
	int p = 0;
	int i = 0;

	for (int i = 0; i < j; ++i) {

		if (isPalindrome(arr[i])) {
			arr[i] = 0;
			p++;
		}
	}

	for (int i = 0; i < j; ++i) {
		for (int n = 0; n < j - 1; ++n) {

			if (arr[n] == 0) {
				std::swap(arr[n], arr[n + 1]);
			}

		}
	}

	j -= p;

	while (i < j) {

		if (isPrime(arr[i])) {

			for (int n = j; n > i; --n) {
				arr[n] = arr[n - 1];
			}
			j++;
			i++;

		}
		i++;
	}

}

int main1() {

	setlocale(LC_ALL, "Rus");


	// Задание 2
	/*Ввести последовательность натуральных чисел {Aj}j=1...n (n<=1000).
	Упорядочить последовательность по неубыванию первой цифры числа,
	числа с одинаковыми первыми цифрами дополнительно упорядочить по неубыванию наименьшей цифры числа,
	числа с одинаковыми первыми цифрами и одинаковыми наименьшими цифрами дополнительно упорядочить по неубыванию самого числа*/

	/*const int J = 1000;
	int array[J];
	int j;

	std::cout << "Введите кол-во членов последовательности (0 < j <= 1000): " << std::endl;
	std::cin >> j;

	if (j < 0 || j > 1000) {
		std::cout << "Ошибка! Кол-во членов последовательности должно быть больше 0 и не должно превышать 1000!!!" << std::endl;
		return -1;
	}

	for (int i = 0; i < j; ++i) {
		std::cin >> array[i];
	}

	Sort(array, j);

	for (int i = 0; i < j; ++i) {
		std::cout << array[i] << " ";
	}*/

	// Задание 3
	/*Дана целочисленная матрица {Aij}i=1..n,j=1..m (n,m<=100).
	Найти строку с наименьшей суммой элементов и заменнить все элементы этой строки этой суммой.*/


	/*int matrix[N][N];
	int n;
	int m;

	std::cout << "Введите размерность матрицы (0 < n <= 100; 0 < m <= 100): " << std::endl;
	std::cin >> n;
	std::cin >> m;

	std::cout << "Вводите элементы: " << std::endl;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> matrix[i][j];
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}

	MinMatrixSum(matrix, n, m);

	std::cout << std::endl;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}*/


	// Задание 4
	/*Сначала введите последовательность. Затем удалите и продублируйте элементы.
	Затем выведите полученную последовательность (каждый элемент по одному разу).
	Используйте в программе только один массив.

	Дана последовательность натуральных чисел {Aj}j=1...n (n<=10000).
	Удалить из последовательности числа-палиндромы, а среди оставшихся продублировать простые числа.*/

	const int J = 10000;
	int sequence[2 * J];
	int j;

	std::cout << "Введите кол-во членов последовательности: " << std::endl;
	std::cin >> j;

	std::cout << "Вводите члены последовательности: " << std::endl;

	for (int i = 0; i < j; ++i) {
		std::cin >> sequence[i];
	}

	CopyDel(sequence, j);

	for (int i = 0; i < j; ++i) {
		std::cout << sequence[i] << std::endl;
	}




	return 0;
}
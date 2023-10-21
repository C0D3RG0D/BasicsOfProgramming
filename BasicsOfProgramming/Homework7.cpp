#include <iostream>
#include "Homework7.hpp"


int main() {

	/*Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100. 
	Если в матрице есть еще один элемент, равный ее минимальному элементу, 
	и не менее 2-х элементов, абсолютные величины которых - простые числа, 
	упорядочить строки матрицы по невозрастанию произведений элементов. */

	setlocale(LC_ALL, "Rus");

	int sequence[N][N];
	int n;
	int m;

	std::cout << "Введите размерность матрицы: " << std::endl;
	std::cin >> n;
	std::cin >> m;

	std::cout << "Вводите элементы матрицы построчно: " << std::endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> sequence[i][j];
		}
	}

	mt::Sort(sequence, n, m);
	std::cout << ' ' << std::endl;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cout << sequence[i][j] << ' ';
		}
		std::cout << std::endl;
	}


	return 0;
}
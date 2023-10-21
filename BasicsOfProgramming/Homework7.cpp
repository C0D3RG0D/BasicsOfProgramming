#include <iostream>
#include "Homework7.hpp"


int main() {

	/*���� ������������� ������� {Aij}i=1...n;j=1..n , n<=100. 
	���� � ������� ���� ��� ���� �������, ������ �� ������������ ��������, 
	� �� ����� 2-� ���������, ���������� �������� ������� - ������� �����, 
	����������� ������ ������� �� ������������� ������������ ���������. */

	setlocale(LC_ALL, "Rus");

	int sequence[N][N];
	int n;
	int m;

	std::cout << "������� ����������� �������: " << std::endl;
	std::cin >> n;
	std::cin >> m;

	std::cout << "������� �������� ������� ���������: " << std::endl;
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
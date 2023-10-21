#include <iostream>
#include <cmath>
#include <iomanip>


int Lab2() {
	setlocale(LC_ALL, "Rus");

	unsigned int x, i;
	

	std::cout << "������� ����� (0 < x < 10^9): " << std::endl;
	std::cin >> x;
	std::cout << "������� ���, ������� ����� �������� �� 1 (0 < i < 31): " << std::endl;
	std::cin >> i;

	if (i < 0 || i > 31) {
		std::cout << "������. i ������ ���� � ��������� 0 < i < 31" << std::endl;
		return 1;
	}

	x = x | (1 << i);

	std::cout << "���������: " << x << std::endl;

	return 0;
}
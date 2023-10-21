#include <iostream>

int Lab4() {
	setlocale(LC_ALL, "Rus");

	//������� 1
	
	int j, sum = 0, max = -1, a, k = -1;

	std::cout << "������� ���-�� ��������� ������������������" << std::endl;
	std::cin >> j;

	std::cout << "������� �������� ������������������" << std::endl;
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

	std::cout << "����� ������ ������������������ �������������� �� 0 ��� 7: " << sum << std::endl;
	std::cout << "������������ �� ������ ������������������ �������������� �� 0 ��� 7: " << max << std::endl;
	std::cout << "������ ������������� �����: " << k << std::endl;


	//������� 2

	int n, sum1 = 0;

	std::cout << "������� ����� (0 < n < 10^9)" << std::endl;
	std::cin >> n;

	if (n > 1000000000) {
		std::cout << "����� n ������ ���� ������ 10^9!" << std::endl;
		return 1;
	}

	while (n > 0) {

		int num = n % 10;

		if ((num & 1) == 1) {

			sum1 += num;

		}

		n /= 10;
	}

	std::cout << "����� �������� ���� �����: "<< sum1 << std::endl;

	return 0;
}
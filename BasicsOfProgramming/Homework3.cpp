#include <iostream>

int Lab3() {

	// ������� 1

	setlocale(LC_ALL, "Rus");

	int a, b, c;
	
	std::cout << "������� ����� A: " << std::endl;
	std::cin >> a;

	std::cout << "������� ����� B: " << std::endl;
	std::cin >> b;

	std::cout << "������� ����� C: " << std::endl;
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

	// ������� 2

	short n;

	std::cout << "������� ��� ������ (0, 1, 2, 3): " << std::endl;
	std::cin >> n;

	switch (n) 
	{
		case 0:
			std::cout << "������ ���" << std::endl;
			break;

		case 1:
			std::cout << "������ ������ �����" << std::endl;
			break;

		case 2:
			std::cout << "������ ������ �����" << std::endl;
			break;

		case 3:
			std::cout << "�� ��� ���� ����������" << std::endl;
			break;

		default:
			std::cout << "������ � ����� ����� �����������" << std::endl;
			break;
	}

	//������� 3

	short x;

	std::cout << "������� �������� x (1 ��� -1): " << std::endl;
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
			std::cout << "������! x ��������� ������ �������� 1 ��� -1" << std::endl;
			break;
	}

	return 0;
}
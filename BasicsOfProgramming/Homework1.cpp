#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

int AreaCircle()
{
    setlocale(LC_ALL, "RUS");
    double R, S;
    std::cout << "������� ������\n";
    std::cin >> R;

    if (R > 0 and R < 100) {
        S = R * R * M_PI;
        std::cout << std::setprecision(9) << "������� ����� �����: " << S;
    }
    else {
        std::cout << "������ ������ ���������� � ��������� �� 1 �� 100!!! (0 < R < 100)";
        return 1;
    }

    return 0;

}


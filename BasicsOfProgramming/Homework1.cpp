#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

int AreaCircle()
{
    setlocale(LC_ALL, "RUS");
    double R, S;
    std::cout << "Введите радиус\n";
    std::cin >> R;

    if (R > 0 and R < 100) {
        S = R * R * M_PI;
        std::cout << std::setprecision(9) << "Площадь круга равна: " << S;
    }
    else {
        std::cout << "Радиус должен находиться в диапозоне от 1 до 100!!! (0 < R < 100)";
        return 1;
    }

    return 0;

}


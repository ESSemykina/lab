/*Вариант 4.
Написать программу, которая получает на вход вещественное число R (0 < R < 100) – радиус круга. 
И рассчитывает площадь круга с точностью до 10^-9.
*/
#include <iostream>

int main()
{
	float R;
	double S;
	double pi = acos(-1);

	std::cin >> R;
	S = pi * pow(R, 2);
		std::cout << S << std::endl;
}

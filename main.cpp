#include "Math.h"
#include <iostream>
#include <format>

int main() {

	Math<int, int> m1(8, 12);
	Math<float, float> m2(5.8f, 3.2f);
	Math<double, double> m3(2.4, 5.2);

	Math<int, float> m4(3, 3.9f);
	Math<int, double> m5(9, 6.2);
	Math<float, double> m6(3.9f, 4.2);

	std::cout << std::format("{}\n", m1.Min());
	std::cout << std::format("{}\n", m2.Min());
	std::cout << std::format("{}\n", m3.Min());

	std::cout << std::format("{}\n", m4.Min());
	std::cout << std::format("{}\n", m5.Min());
	std::cout << std::format("{}\n", m6.Min());

	return 0;
}
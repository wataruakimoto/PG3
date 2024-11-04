#include "Math.h"
#include <cstdio>

int main() {

	Math<int, int> m1(8, 12);
	Math<float, float> m2(5.8f, 3.2f);
	Math<double, double> m3(2.4, 5.2);

	Math<int, float> m4(3, 3.9f);
	Math<int, double> m5(9, 6.2);
	Math<float, double> m6(3.9f, 4.2);

	printf("%d\n", m1.Min());
	printf("%.1f\n", m2.Min());
	printf("%.1f\n", m3.Min());

	printf("%.1f\n", m4.Min());
	printf("%.1f\n", m5.Min());
	printf("%.1f\n", m6.Min());

	return 0;
}
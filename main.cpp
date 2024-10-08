#include <stdio.h>

int Recursive(int salary,int count) {

	// 給料が1072円を超えたら終了
	if (salary >= 1072) {

		printf("%d時間目 : %d円 で1072円を超える\n", count, salary);

		return(1);

	} else {

		printf("%d時間目 : %d円\n", count, salary);

		count++;

		return (Recursive(salary * 2 - 50, count));
	}
}

int main() {

	// 給料
	int salary = 100;

	// 何回再起したかを数える
	int count = 1;

	Recursive(salary, count);

	return 0;
}
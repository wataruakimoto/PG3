#include <stdio.h>

int Recursive(int salary,int count) {

	// ������1072�~�𒴂�����I��
	if (salary >= 1072) {

		printf("%d���Ԗ� : %d�~ ��1072�~�𒴂���\n", count, salary);

		return(1);

	} else {

		printf("%d���Ԗ� : %d�~\n", count, salary);

		count++;

		return (Recursive(salary * 2 - 50, count));
	}
}

int main() {

	// ����
	int salary = 100;

	// ����ċN�������𐔂���
	int count = 1;

	Recursive(salary, count);

	return 0;
}
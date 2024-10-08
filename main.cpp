#include <stdio.h>

int Recursive(int salary,int count) {

	// ‹‹—¿‚ª1072‰~‚ğ’´‚¦‚½‚çI—¹
	if (salary >= 1072) {

		printf("%dŠÔ–Ú : %d‰~ ‚Å1072‰~‚ğ’´‚¦‚é\n", count, salary);

		return(1);

	} else {

		printf("%dŠÔ–Ú : %d‰~\n", count, salary);

		count++;

		return (Recursive(salary * 2 - 50, count));
	}
}

int main() {

	// ‹‹—¿
	int salary = 100;

	// ‰½‰ñÄ‹N‚µ‚½‚©‚ğ”‚¦‚é
	int count = 1;

	Recursive(salary, count);

	return 0;
}
#include <stdio.h>

int Recursive(int count, int salaryA, int totalA, int salaryB, int totalB) {

	// ‰½‰ñÄ‹N‚µ‚½‚©
	count++;

	// ‚»‚ê‚¼‚ê‹‹—¿‚ğ‡Œv‚É‘«‚µ‚Ş
	totalA += salaryA;
	totalB += salaryB;

	// ‰Â•Ï‹‹‚Ì‡Œv‚ªŒÅ’è‹‹‚Ì‡Œv‚ğ’´‚¦‚½‚çI—¹
	if (totalA >= totalB) {

		printf("%dŠÔ–Ú || ‹‹%d‰~ ‘x‹‹%d‰~ || ‹‹%d‰~ ‘x‹‹%d‰~\n", count, salaryA, totalA, salaryB, totalB);

		return(1);

	} else {

		printf("%dŠÔ–Ú || ‹‹%d‰~ ‘x‹‹%d‰~ || ‹‹%d‰~ ‘x‹‹%d‰~\n", count, salaryA, totalA, salaryB, totalB);

		// ‹‹‚ğƒAƒbƒv‚³‚¹‚é
		salaryA = salaryA * 2 - 50;

		// Ä‹Aˆ—
		return (Recursive(count, salaryA, totalA, salaryB, totalB));
	}
}

int main() {

	// ‰½‰ñÄ‹N‚µ‚½‚©‚ğ”‚¦‚é
	int count = 0;

	// ‹‹
	int salaryA = 100;

	// ‘x‹‹
	int totalA = 0;

	// ŒÅ’è‹‹
	int salaryB = 1072;

	// ‘x‹‹
	int totalB = 0;

	// Ä‹AŠÖ”ŒÄ‚Ño‚µ
	Recursive(count, salaryA, totalA, salaryB, totalB);

	return 0;
}
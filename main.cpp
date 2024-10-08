#include <stdio.h>

int Recursive(int count, int salaryA, int totalA, int salaryB, int totalB) {

	// 何回再起したか
	count++;

	// それぞれ給料を合計に足し込む
	totalA += salaryA;
	totalB += salaryB;

	// 可変給の合計が固定給の合計を超えたら終了
	if (totalA >= totalB) {

		printf("%d時間目 || 時給%d円 総支給%d円 || 時給%d円 総支給%d円\n", count, salaryA, totalA, salaryB, totalB);

		return(1);

	} else {

		printf("%d時間目 || 時給%d円 総支給%d円 || 時給%d円 総支給%d円\n", count, salaryA, totalA, salaryB, totalB);

		// 時給をアップさせる
		salaryA = salaryA * 2 - 50;

		// 再帰処理
		return (Recursive(count, salaryA, totalA, salaryB, totalB));
	}
}

int main() {

	// 何回再起したかを数える
	int count = 0;

	// 時給
	int salaryA = 100;

	// 総支給
	int totalA = 0;

	// 固定給
	int salaryB = 1072;

	// 総支給
	int totalB = 0;

	// 再帰関数呼び出し
	Recursive(count, salaryA, totalA, salaryB, totalB);

	return 0;
}
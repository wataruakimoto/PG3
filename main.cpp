#include <stdio.h>
#include <Windows.h>
#include <random>

// 関数ポインタ
typedef void (*PFunc)(int*);

/// <summary>
/// コールバック関数
/// </summary>
/// <param name="s"></param>
void DispResult(int* dice) {

	printf("%dです!!\n", *dice);
}

/// <summary>
/// ランダムに1~6の整数を出す処理
/// </summary>
/// <returns></returns>
int random() {

	std::random_device rd;
	std::mt19937 gen(rd());

	// int型の数字を1~6の間でランダムに生成
	std::uniform_real_distribution<> dist(1, 6);	

	return dist(gen);
}

/// <summary>
/// 時間を待たせる処理
/// </summary>
/// <param name="p"></param>
/// <param name="second"></param>
void setTimeout(PFunc p, int second,int dice) {

	// 時間経過の処理
	Sleep(second * 1000);

	// コールバック関数呼び出し
	p(&dice);
}

int main() {

	// 関数ポインタの入れ物
	PFunc p;

	// 関数ポインタに代入(ここで何の関数をポインタに入れるか決める)
	p = DispResult;

	// ランダムにサイコロの目を抽選
	int dice = random();

	// 相手に奇数か偶数か答えてもらう
	char answer[10];
	printf("奇数か偶数かを答えてください :  ");
	scanf_s("%s", answer, (unsigned)_countof(answer));

	// サイコロの値の告知
	printf("サイコロの目は...");

	// 時間を待たせる処理
	setTimeout(p, 3, dice);

	// 2で割って余りが1(奇数)ならtrue, 0(偶数)ならfalse
	bool judge = (dice % 2 != 0);

	// サイコロの目が奇数で回答も奇数なら
	if (judge && strcmp(answer, "奇数") == 0) {

		printf("正解!奇数だよ!\n");

	// サイコロの目が偶数で回答も偶数なら
	} else if (!judge && strcmp(answer, "偶数") == 0) {

		printf("正解!偶数だよ!\n");

	// サイコロの目と回答があっていなければ
	} else {

		printf("残念。不正解だよ。\n");
	}

	return 0;
}
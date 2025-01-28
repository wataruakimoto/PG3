#include <string>
#include <chrono>
#include <iostream>

using namespace std;

int main() {

	// 10万文字のa
	string a(100000, 'a');

	// コピーにかかる時間を計測
	auto startCopy = chrono::high_resolution_clock::now();
	string b = a; // 右辺値をコピー
	auto endCopy = chrono::high_resolution_clock::now();
	auto timeCopy = chrono::duration_cast<chrono::microseconds>(endCopy - startCopy);

	// 移動にかかる時間を計測
	auto startMove = chrono::high_resolution_clock::now();
	string c = move(a); // 右辺値を移動
	auto endMove = chrono::high_resolution_clock::now();
	auto timeMove = chrono::duration_cast<chrono::microseconds>(endMove - startMove);

	// 結果表示
	cout << "100,000文字を移動とコピーで比較しました" << endl;
	cout << "コピー : " << timeCopy << endl;
	cout << "移動 : " << timeMove << endl;

	return 0;
}
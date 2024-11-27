#include <string>
#include <list>
#include <iostream>

using namespace std;

int main() {

	// 山手線リスト
	list<string> JY{

		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	cout << "1970年の山手線" << "\n";

	for (list<string>::iterator itr = JY.begin(); itr != JY.end(); ++itr) {

		cout << *itr << "\n";
	}

	// 8番目に西日暮里をいれる
	list<string>::iterator itr1 = JY.begin(); // 挿入用イテレーター
	advance(itr1, 7); // 7番目まで移動
	JY.insert(itr1, "Nishi-Nippori"); // 8番目に挿入

	cout << "\n" << "2019年の山手線" << "\n";

	for (list<string>::iterator itr = JY.begin(); itr != JY.end(); ++itr) {

		cout << *itr << "\n";
	}

	// 26番目に高輪ゲートウェイをいれる
	list<string>::iterator itr2 = JY.begin(); // 挿入用イテレーター
	advance(itr2, 25); // 25番目まで移動
	JY.insert(itr2, "Takanawa Gateway"); // 26番目に挿入

	cout << "\n" << "2022年の山手線" << "\n";

	for (list<string>::iterator itr = JY.begin(); itr != JY.end(); ++itr) {

		cout << *itr << "\n";
	}

	return 0;
}
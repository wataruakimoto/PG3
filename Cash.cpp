#include "Cash.h"

Cash::Cash() {}

Cash::~Cash() {}

void Cash::Pay() {

	// 支払い方法の文字列を代入
	name = "現金";

	// 基底クラスの処理を行う
	Payment::Pay();
}
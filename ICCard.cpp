#include "ICCard.h"

ICCard::ICCard() {}

ICCard::~ICCard() {}

void ICCard::Pay() {

	// 支払い方法の文字列を代入
	name = "Suica";

	// 基底クラスの処理を行う
	Payment::Pay();
}
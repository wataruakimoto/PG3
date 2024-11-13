#include "Barcode.h"

Barcode::Barcode() {}

Barcode::~Barcode() {}

void Barcode::Pay() {

	// 支払い方法の文字列を代入
	name = "PayPay";

	// 基底クラスの処理を行う
	Payment::Pay();
}
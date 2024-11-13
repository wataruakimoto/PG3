#pragma once
#include "Payment.h"
class Barcode : public Payment {

	///-------------------------------------------/// 
	/// メンバ関数
	///-------------------------------------------///
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Barcode();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Barcode();

	/// <summary>
	/// 支払い(オーバーライド)
	/// </summary>
	void Pay() override;
};
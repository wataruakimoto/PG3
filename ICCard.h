#pragma once
#include "Payment.h"
class ICCard : public Payment {

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	ICCard();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~ICCard();

	/// <summary>
	/// 支払い(オーバーライド)
	/// </summary>
	void Pay() override;
};
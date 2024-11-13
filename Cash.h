#pragma once
#include "Payment.h"

/// === 現金 === ///
class Cash : public Payment {

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Cash();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Cash();

	/// <summary>
	/// 支払い(オーバーライド)
	/// </summary>
	void Pay() override;
};
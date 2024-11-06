#pragma once
#include "IShape.h"

/// ========== 円(継承) ========== ///
class Circle : public IShape {

///-------------------------------------------/// 
/// メンバ関数
///-------------------------------------------///
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="radius">半径</param>
	Circle(float radius) : radius_(radius) {};

	/// <summary>
	/// 面積を求める(継承)
	/// </summary>
	void Size() override;

	/// <summary>
	/// 値を表示(継承)
	/// </summary>
	void Draw() override;

///-------------------------------------------/// 
/// メンバ変数
///-------------------------------------------///
private:

	// 半径
	float radius_;
};
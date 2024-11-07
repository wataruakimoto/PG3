#pragma once
#include "IShape.h"

/// ========== 矩形(継承) ========== ///
class Rectangle : public IShape {

	///-------------------------------------------/// 
	/// メンバ関数
	///-------------------------------------------///
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="width">幅</param>
	/// <param name="height">高さ</param>
	Rectangle(float width, float height) : width_(width), height_(height) {};

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

	// 幅
	float width_;

	// 高さ
	float height_;

	// 面積
	float area_;
};
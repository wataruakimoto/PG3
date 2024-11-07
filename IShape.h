#pragma once
/// ========== 基底クラス(インターフェース) ========== ///
class IShape {

///-------------------------------------------/// 
/// メンバ関数(純粋仮想関数)
///-------------------------------------------///
public:

	/// <summary>
	/// 仮想デストラクタ
	/// </summary>
	virtual ~IShape() = 0;

	/// <summary>
	/// 面積を求める
	/// </summary>
	virtual void Size() = 0;

	/// <summary>
	/// 値を表示する
	/// </summary>
	virtual void Draw() = 0;
};
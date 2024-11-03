#pragma once

/// === 敵クラス === ///
class Enemy {	

///=====================================================/// 
/// メンバ関数
///=====================================================///
public:

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 接近
	/// </summary>
	void Approach();

	/// <summary>
	/// 攻撃
	/// </summary>
	void Attack();

	/// <summary>
	/// 離脱
	/// </summary>
	void Leave();

private:

	/// <summary>
	/// 状態ごとの関数ポインタのテーブル
	/// </summary>
	static void(Enemy::*stateFuncTable[])();

///=====================================================/// 
/// メンバ変数
///=====================================================///
private:

	enum class Phase {

		Approach, // 接近
		Attack,	  // 攻撃
		Leave	  // 離脱
	};

	Phase phase_ = Phase::Approach;
};
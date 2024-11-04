#pragma once

// クラステンプレート
template <typename Type1, typename Type2>

/// === 計算用 === ///
class Math {

///=====================================================/// 
/// メンバ関数
///=====================================================///
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <returns></returns>
	Math(Type1 a, Type2 b) : a(a), b(b) {};

	Type2 Min() {

		if (a < b) {

			return static_cast<Type2>(a);

		} else {

			return static_cast<Type2>(b);
		}
	};

///=====================================================/// 
/// メンバ変数
///=====================================================///
private:

	Type1 a;
	Type2 b;
};
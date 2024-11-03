#include "Enemy.h"
#include <stdio.h>

void Enemy::Update() {

	printf("現在の状態は ");

	// 現在のフェーズの関数を実行
	(this->*stateFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::Approach() {

	printf("接近です\n");

	// 次のフェーズを攻撃に変更
	phase_ = Phase::Attack;
}

void Enemy::Attack() {

	printf("射撃です\n");

	// 次のフェーズを離脱に変更
	phase_ = Phase::Leave;
}

void Enemy::Leave() {

	printf("離脱です\n");
}

//  状態ごとの関数ポインタのテーブルの実体
void(Enemy::* Enemy::stateFuncTable[])() = {

	&Enemy::Approach, // 接近
	&Enemy::Attack,	  // 攻撃
	&Enemy::Leave	  // 離脱
};
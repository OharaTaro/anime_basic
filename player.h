#pragma once

#include "Vec2.h"

class Player
{
public:
	Player();
	virtual ~Player();

	// グラフィックデータ設定
	void setHandle(int handle) { m_handle = handle; }

	// プレイヤーの初期化
	void init();

	// 処理
	void update();
	// 描画
	void draw();

private:
	int m_handle;

	// 表示位置
	Vec2 m_pos;
	// 移動
	Vec2 m_vec;
};
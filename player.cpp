#include "DxLib.h"
#include <cassert>
#include "game.h"
#include "player.h"

namespace
{
	// キャラクターのサイズ
	constexpr int kSizeX = 32;
	constexpr int kSizeY = 32;
}

Player::Player()
{
	m_handle = -1;
}

Player::~Player()
{
	
}

void Player::init()
{
	m_pos.x = Game::kScreenWidth / 2 - kSizeX / 2;
	m_pos.y = Game::kScreenHeight / 2 - kSizeY / 2;
	m_vec.x = 0.0f;
	m_vec.y = 0.0f;
}

void Player::update()
{
	// パッド(もしくはキーボード)からの入力を取得する
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_UP)
	{

	}
	if (padState & PAD_INPUT_DOWN)
	{

	}
	if (padState & PAD_INPUT_LEFT)
	{

	}
	if (padState & PAD_INPUT_RIGHT)
	{

	}
}

void Player::draw()
{
	DrawGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), m_handle, true);
}
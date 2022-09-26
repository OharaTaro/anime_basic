#include "DxLib.h"
#include "SceneMain.h"

SceneMain::SceneMain()
{
	m_hPlayerGraphic = -1;
}
SceneMain::~SceneMain()
{

}

// 初期化
void SceneMain::init()
{
	m_hPlayerGraphic = LoadGraph("data/char.png");
	m_player.setHandle(m_hPlayerGraphic);
	m_player.init();
}

// 終了処理
void SceneMain::end()
{
	DeleteGraph(m_hPlayerGraphic);
}

// 毎フレームの処理
void SceneMain::update()
{
	m_player.update();
}

// 毎フレームの描画
void SceneMain::draw()
{
	m_player.draw();
}
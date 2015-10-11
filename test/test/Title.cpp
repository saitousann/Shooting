#include "Title.h"
#include "MainGame.h"

Title::Title()
{
	//コンストラクタ
	pos = VGet(0.0f, 0.0f, 0.0f);
	m_KeyManager = new KeyManager();
}


Title::~Title()
{
	//デストラクタ
}

SceneBase* Title::Update(GameScene*)
{
	SceneBase* next = this;
	
	m_KeyManager->KeyCheck();
	
	if (m_KeyManager->get_up_button() == HOLD) {
		pos.x += 1.0f;
	}

	if (m_KeyManager->get_up_button() == PULL)
	{
		next = new MainGame();
	}

	return next;
}

void Title::Draw(GameScene *)
{
	DrawPixel(pos.x, pos.y, GetColor(255, 255, 255));	// 点を打つ
}
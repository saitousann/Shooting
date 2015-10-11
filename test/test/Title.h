#pragma once

#include "GameScene.h"

class Title : public SceneBase
{
public:
	Title();
	~Title();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);
private:
	VECTOR pos;
	KeyManager* m_KeyManager;
};


//author: 齋藤 悠記

#pragma once

#include "DxLib.h"

#define FREE 0				//	押されていない
#define HOLD 1				//	押されている
#define PUSH 2				//	押した瞬間
#define PULL 3				//	離した瞬間

class KeyManager
{
public:
	KeyManager();

	void KeyCheck();
	void KeyUpData(int *, int BYTE);
	//ボタン
	int get_up_button()			{return m_up_button;}

private:
	//ボタンの読み込み！
	int m_key;

	int m_up_button;
};

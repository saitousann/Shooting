//author: �V�� �I�L

#pragma once

#include "DxLib.h"

#define FREE 0				//	������Ă��Ȃ�
#define HOLD 1				//	������Ă���
#define PUSH 2				//	�������u��
#define PULL 3				//	�������u��

class KeyManager
{
public:
	KeyManager();

	void KeyCheck();
	void KeyUpData(int *, int BYTE);
	//�{�^��
	int get_up_button()			{return m_up_button;}

private:
	//�{�^���̓ǂݍ��݁I
	int m_key;

	int m_up_button;
};

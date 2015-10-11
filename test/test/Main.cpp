#include "DxLib.h"
#include "GameScene.h"
#include "KeyManager.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	GameScene* mGameScene;		//�Q�[���V�[���̍쐬 ��������ʂ����Ă���
	mGameScene = new GameScene;	//�C���X�^���X���� GameScene�̃R���X�g���N�^�Ń^�C�g���V�[���������Ă���
	
	SetGraphMode(640, 480, 16);	//��ʂ̉𑜓x
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}
	// �`����ʂ𗠉�ʂɃZ�b�g
	SetDrawScreen(DX_SCREEN_BACK);
	// ���[�v
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// ��ʂ�����������
		ClearDrawScreen();

		//��ʓ��쏈��
		mGameScene->Update();

		//��ʕ`�揈��
		mGameScene->Draw();

		// ����ʂ̓��e��\��ʂɔ��f������
		ScreenFlip();
	}
	DxLib_End();				// �c�w���C�u�����g�p�̏I������
	return 0;				// �\�t�g�̏I�� 
}

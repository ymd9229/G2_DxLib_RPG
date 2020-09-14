//########## �w�b�_�[�t�@�C���ǂݍ��� ##########
#include "DxLib.h"

//########## �}�N����` ##########
#define GAME_WIDTH	800	//��ʂ̉��̑傫��
#define GAME_HEIGHT	600	//��ʂ̏c�̑傫��
#define GAME_COLOR	32	//��ʂ̃J���[�r�b�g

#define GAME_WINDOW_BAR	0	//�^�C�g���o�[�̓f�t�H���g�ɂ���
#define GAME_WINDOW_NAME	"GAME TITLE"	//�E�B���h�E�̃^�C�g��

//########## �v���O�����ōŏ��Ɏ��s�����֐� ##########
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);			//�E�B���h�E���[�h�ɐݒ�
	SetGraphMode(GAME_WIDTH, GAME_HEIGHT, GAME_COLOR);	//�w��̐��l�ŃE�B���h�E��\������
	SetWindowStyleMode(GAME_WINDOW_BAR);	//�^�C�g���o�[�̓f�t�H���g�ɂ���
	SetMainWindowText(TEXT(GAME_WINDOW_NAME));	//�E�B���h�E�̃^�C�g���̕���

	if (DxLib_Init() == -1) { return -1; }	//�c�w���C�u��������������

	int DrawX = 0;	//�\���ʒuX
	int DrawY = 0;	//�\���ʒuY

	DrawString(DrawX, DrawY, "Hello World", GetColor(255, 255, 255));	//������`��

	WaitKey();	//�L�[���͑҂�
	DxLib_End();	//�c�w���C�u�����g�p�̏I������

	return 0;
};
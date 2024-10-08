#include <stdio.h>
#include <Windows.h>
#include <random>

// �֐��|�C���^
typedef void (*PFunc)(int*);

/// <summary>
/// �R�[���o�b�N�֐�
/// </summary>
/// <param name="s"></param>
void DispResult(int* dice) {

	printf("%d�ł�!!\n", *dice);
}

/// <summary>
/// �����_����1~6�̐������o������
/// </summary>
/// <returns></returns>
int random() {

	std::random_device rd;
	std::mt19937 gen(rd());

	// int�^�̐�����1~6�̊ԂŃ����_���ɐ���
	std::uniform_real_distribution<> dist(1, 6);	

	return dist(gen);
}

/// <summary>
/// ���Ԃ�҂����鏈��
/// </summary>
/// <param name="p"></param>
/// <param name="second"></param>
void setTimeout(PFunc p, int second,int dice) {

	// ���Ԍo�߂̏���
	Sleep(second * 1000);

	// �R�[���o�b�N�֐��Ăяo��
	p(&dice);
}

int main() {

	// �֐��|�C���^�̓��ꕨ
	PFunc p;

	// �֐��|�C���^�ɑ��(�����ŉ��̊֐����|�C���^�ɓ���邩���߂�)
	p = DispResult;

	// �����_���ɃT�C�R���̖ڂ𒊑I
	int dice = random();

	// ����Ɋ�������������Ă��炤
	char answer[10];
	printf("����������𓚂��Ă������� :  ");
	scanf_s("%s", answer, (unsigned)_countof(answer));

	// �T�C�R���̒l�̍��m
	printf("�T�C�R���̖ڂ�...");

	// ���Ԃ�҂����鏈��
	setTimeout(p, 3, dice);

	// 2�Ŋ����ė]�肪1(�)�Ȃ�true, 0(����)�Ȃ�false
	bool judge = (dice % 2 != 0);

	// �T�C�R���̖ڂ���ŉ񓚂���Ȃ�
	if (judge && strcmp(answer, "�") == 0) {

		printf("����!�����!\n");

	// �T�C�R���̖ڂ������ŉ񓚂������Ȃ�
	} else if (!judge && strcmp(answer, "����") == 0) {

		printf("����!��������!\n");

	// �T�C�R���̖ڂƉ񓚂������Ă��Ȃ����
	} else {

		printf("�c�O�B�s��������B\n");
	}

	return 0;
}
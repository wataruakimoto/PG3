#include <stdio.h>

int Recursive(int count, int salaryA, int totalA, int salaryB, int totalB) {

	// ����ċN������
	count++;

	// ���ꂼ�ꋋ�������v�ɑ�������
	totalA += salaryA;
	totalB += salaryB;

	// �ϋ��̍��v���Œ苋�̍��v�𒴂�����I��
	if (totalA >= totalB) {

		printf("%d���Ԗ� || ����%d�~ ���x��%d�~ || ����%d�~ ���x��%d�~\n", count, salaryA, totalA, salaryB, totalB);

		return(1);

	} else {

		printf("%d���Ԗ� || ����%d�~ ���x��%d�~ || ����%d�~ ���x��%d�~\n", count, salaryA, totalA, salaryB, totalB);

		// �������A�b�v������
		salaryA = salaryA * 2 - 50;

		// �ċA����
		return (Recursive(count, salaryA, totalA, salaryB, totalB));
	}
}

int main() {

	// ����ċN�������𐔂���
	int count = 0;

	// ����
	int salaryA = 100;

	// ���x��
	int totalA = 0;

	// �Œ苋
	int salaryB = 1072;

	// ���x��
	int totalB = 0;

	// �ċA�֐��Ăяo��
	Recursive(count, salaryA, totalA, salaryB, totalB);

	return 0;
}
//�� ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 101
int main() {
	int array[SIZE];
	int i, s;
	for (i = 0;i < SIZE;i++) { // �迭 �ʱ�ȭ
		array[i] = 0;
	}
	while (1){
		printf("���ڸ� �Է��Ͻÿ�(���� -1): ");
		scanf_s("%d", &s);
		if (s < 0) break;
		array[s]++; // s��° ���ڿ� 1�� ����
	}
	printf("��   ��\n");
	for (i = 0;i < SIZE;i++) {
		printf("%3d   %3d\n", i, array[i]);
	}
}
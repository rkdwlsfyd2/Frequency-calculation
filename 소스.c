//빈도 계산
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 101
int main() {
	int array[SIZE];
	int i, s;
	for (i = 0;i < SIZE;i++) { // 배열 초기화
		array[i] = 0;
	}
	while (1){
		printf("숫자를 입력하시오(종료 -1): ");
		scanf_s("%d", &s);
		if (s < 0) break;
		array[s]++; // s번째 상자에 1이 증가
	}
	printf("값   빈도\n");
	for (i = 0;i < SIZE;i++) {
		printf("%3d   %3d\n", i, array[i]);
	}
}
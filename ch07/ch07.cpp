//문제1.

#include <stdio.h>

int main() {
	/*
	printf("문제 1 :\n");

	int num1, num2;

	printf("첫 번째 정수 :");
	scanf_s("%d", &num1);
	printf("\n");
	printf("두 번째 정수 :");
	scanf_s("%d", &num2);

	printf("두 정수의 합은 : %d", num1 + num2);
	printf("\n");
	printf("\n");
	*/
	//-------------------------------

	//문제2.

	unsigned int num3;
	int count=0;
	int div = 10000;
	int result[5];

	printf("입력 :");
	scanf_s("%d", &num3);
	printf("\n");
	int size = sizeof(num3);
	printf("%d", size);

	for (int i = 0; i > 4; i++) {
		result[i] = num3 / div;
		num3 = num3 % div;
		div /= 10;
	}

	
	printf("\n");
	printf("\n");

	//문제3.

	printf("문제 3 :\n");

	int num4;

	printf("입력 :");
	scanf_s("%d", &num4);

	if (num4 < 0) {
		printf("cold");
	}
	else if (num4 >= 0 && num4 < 40) {
		printf("moderate");
	}
	else if (num4 == 40) {
		printf("hot");
	}
}
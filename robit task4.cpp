#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	float num1, num2, square = 1;
	char yunsan;

	printf("Input Arithmetic Operation \n ex)  3.4 * 8.5 \n 2.9 - 5.4 \n 3.9 *8.0 \n 3.9 ^ 8\n");
	
	scanf("%f %c %f", &num1, &yunsan, &num2);
	

	if (yunsan == '+')
	{
		printf("input: %f + %f\n", num1, num2);
		printf("%f + %f = %f", num1, num2, num1 + num2);

	}

	if (yunsan == '-')
	{
		printf("input: %f - %f\n", num1, num2);
		printf("%f - %f = %f", num1, num2, num1 - num2);

	}

	if (yunsan == '*')
	{
		printf("input: %f * %f\n", num1, num2);
		printf("%f * %f = %f", num1, num2, num1 * num2);

	}

	if (yunsan == '/')
	{
		if (num2 != 0)
		{
			printf("input: %f / %f\n", num1, num2);
			printf("%f / %f = %f", num1, num2, num1 / num2);
		}

		else
			printf("ERROR");
		/*0이 됐을 때 나누지 못하는 예외 처리*/
	}

	if (yunsan == '^')
	{
		for (int i = 1; i <= num2; i++)
		{
			square *= num1; /*제곱근 계산을 구현하기 위한 코드, square란 변수에 num1을 num2의 값 번째만큼 제곱한다*/
		}
		printf("%f ^ %f = %f", num1, num2, square);

	}
}

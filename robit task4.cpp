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
		/*0�� ���� �� ������ ���ϴ� ���� ó��*/
	}

	if (yunsan == '^')
	{
		for (int i = 1; i <= num2; i++)
		{
			square *= num1; /*������ ����� �����ϱ� ���� �ڵ�, square�� ������ num1�� num2�� �� ��°��ŭ �����Ѵ�*/
		}
		printf("%f ^ %f = %f", num1, num2, square);

	}
}

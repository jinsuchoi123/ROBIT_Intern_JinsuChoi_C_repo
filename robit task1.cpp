#include<stdio.h>

int main() {
	
	int i;
	float input, average, max = 0, min = 340282346638528859811704183484516925440.00;    //min �Լ��� float�� �ִ밪�� �����Ѵ�.
	                                                                                      //max �Լ����� ���� ���� 0�� �����Ѵ�.
	float sum = 0;
	for (i = 1; i <= 5; i++)
	{
		printf("%d ��° �Ǽ��� �Է��ϼ��� ", i);
		scanf_s("%f", &input);
		
		if (input > max)
			max = input;
		if (input < min)
			min = input;

		sum += input;
	}
	average = sum / 5;
	printf("---- ��� ----\n");
	printf("����� % f �Դϴ�.\n", average);

	

	printf("�ִ��� %f�Դϴ�.\n", max);
	printf("�ּҰ��� %f�Դϴ�.\n", min);
	
		
}

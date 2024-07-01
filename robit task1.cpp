#include<stdio.h>

int main() {
	
	int i;
	float input, average, max = 0, min = 340282346638528859811704183484516925440.00;    //min 함수에 float의 최대값을 대입한다.
	                                                                                      //max 함수에는 가장 작은 0을 대입한다.
	float sum = 0;
	for (i = 1; i <= 5; i++)
	{
		printf("%d 번째 실수를 입력하세요 ", i);
		scanf_s("%f", &input);
		
		if (input > max)
			max = input;
		if (input < min)
			min = input;

		sum += input;
	}
	average = sum / 5;
	printf("---- 결과 ----\n");
	printf("평균은 % f 입니다.\n", average);

	

	printf("최댓값은 %f입니다.\n", max);
	printf("최소값은 %f입니다.\n", min);
	
		
}

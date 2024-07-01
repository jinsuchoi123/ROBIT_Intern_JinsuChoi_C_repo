#include<stdio.h>

int main() {

	int year;
	printf("년도를 입력하세요 ");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //윤년이 되기 위한 조건(나눴을 때 4의 배수이고 100의 배수가 아니거나 400의 배수인 조건식)
		printf("윤년");
	else 
		printf("윤년이 아닙니다."); 
	
}
#include<stdio.h>

int main() {

	int year;
	printf("�⵵�� �Է��ϼ��� ");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //������ �Ǳ� ���� ����(������ �� 4�� ����̰� 100�� ����� �ƴϰų� 400�� ����� ���ǽ�)
		printf("����");
	else 
		printf("������ �ƴմϴ�."); 
	
}
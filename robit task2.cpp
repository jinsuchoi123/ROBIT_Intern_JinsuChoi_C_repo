#include<stdio.h>

int main() {

	int n, first, second, next, i;
	
	printf("n ют╥б: ");
	scanf_s("%d", &n);

	first = 0, second = 1; 
	for (i = 0; i < n; i++)
	{
		if (i <= 1)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
	}
	printf("%d", next);
}
#include<stdio.h>
int main() {

	int n_pac=1, nr_pac=1, r_pac=1, n_two_r=1, ncr=1, nrma1_pac=1, nma1_pac=1;
	int npr, nHr;

	int n, r, i;
	printf("n, r �Է� : ");
	scanf_s("%d %d", &n, &r);

	for (i = 1; i <= n; i++) //n!
		n_pac *= i;

	for (i = 1; i <= n - r; i++)  //(n-r)!
		nr_pac *= i;

	for (i = 1; i <= r; i++)   //r!
		r_pac *= i;

	npr = n_pac / nr_pac;
	printf("����: %d\n", npr);

	for (i = 1; i <= r; i++)
		n_two_r *= n;

	
	printf("�ߺ� ����: %d\n", n_two_r);


	ncr = n_pac / (nr_pac * r_pac);
	printf("����: %d\n", ncr);

	for (i = 1; i <= n + r - 1; i++) //(n+r-1)!
		nrma1_pac *= i;

	for (i = 1; i <= n - 1; i++)
		nma1_pac *= i;   //(n-1)!


	nHr = nrma1_pac / (nma1_pac * r_pac);

	printf("�ߺ� ����: %d", nHr);




}
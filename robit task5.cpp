#include<stdio.h>
int main() {

    int num;
    printf("���� �Է��ϼ���. ");
    scanf_s("%d", &num);

    for (int floor = 1; floor < num* 2; floor++)                 //��ĭ�� ������ ������ ���� �ڵ�
    {
        if (floor <= num)
        {
            for (int j = 0; j < floor; j++)
            {
                printf("*");
            }
            for (int j = 2*(num - floor); j >0 ; j--)     
            {
                printf(" ");
            }
            for (int j = 0; j < floor; j++)
            {
                printf("*");
            }
            printf("\n");

        }
        else if (floor > num)                                           //��ĭ�� ������ ������ ���� �ڵ�
        {
            for (int j = 1; j <= (num - (floor - num)); j++)
            {
                printf("*");
            }
            for (int j = 2 * (floor - num) ; j >0 ; j--)                       
            {
                printf(" ");
            }
            for (int j = 1; j <= (num - (floor - num)); j++)
            {
                printf("*");
            }
            printf("\n");

        }

    }

}

/*���� ��� num = 3 �϶�
�� ��ĭ ��
1   4   1
2   2   2
3   0   3
2   2   2
1   4   1

��ĭ�� ��ĭ�� �پ��� Ŀ���� ���� 1ĭ�� �پ��� Ŀ����*/
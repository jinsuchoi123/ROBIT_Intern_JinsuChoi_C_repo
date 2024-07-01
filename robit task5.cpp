#include<stdio.h>
int main() {

    int num;
    printf("값을 입력하세요. ");
    scanf_s("%d", &num);

    for (int floor = 1; floor < num* 2; floor++)                 //빈칸이 층마다 감소할 떄의 코드
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
        else if (floor > num)                                           //빈칸이 층마다 증가할 때의 코드
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

/*예를 들어 num = 3 일때
별 빈칸 별
1   4   1
2   2   2
3   0   3
2   2   2
1   4   1

빈칸은 두칸씩 줄었다 커지고 별은 1칸씩 줄었다 커진다*/
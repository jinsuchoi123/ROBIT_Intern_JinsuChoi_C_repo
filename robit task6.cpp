#include <stdio.h>

int main() {

    int floor, blank, star, num;

    // 층, 빈칸, 별, 입력받는 수를 저장할 변수 선언

    printf("값을 입력하세요");
    scanf_s("%d", &num);



    for (floor = 1; floor <= num; floor++) //층을 구분하기 위한 for문
    {
        for (blank = 1; blank <= num - floor; blank++)  //삼각형 바깥의 빈칸 나타내는 for문
        {
            printf(" ");
        }
        for (star = 1; star <= 2 * floor - 1; star++) // 삼각형 겉에 '*' , 속에 " "  을 나타낼 for문
        {
            if (star == 1 || star == 2 * floor - 1 || floor == num)
                printf("*");
            else
                printf(" ");
        }


        printf("\n");

    }
}
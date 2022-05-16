#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char name[30];
    int year;

    printf("이름을 입력하시오:");

    gets_s(name, 30);

    printf("성별을 입력하시오:");

    char gender = getchar();

    printf("생년월일을 입력하시요: ");

    scanf("%d", &year);

    puts(name);
    putchar(gender);
    printf("\n");
    printf("%d", year);


    return 0;
}
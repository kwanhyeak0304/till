#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char name[30];
    int year;

    printf("�̸��� �Է��Ͻÿ�:");

    gets_s(name, 30);

    printf("������ �Է��Ͻÿ�:");

    char gender = getchar();

    printf("��������� �Է��Ͻÿ�: ");

    scanf("%d", &year);

    puts(name);
    putchar(gender);
    printf("\n");
    printf("%d", year);


    return 0;
}
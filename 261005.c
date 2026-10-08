// 과제 1번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int nain() {
    int grade;
    printf("학년을 입력하세요 : ");
    scanf("%d", &grade);

    switch (grade) {
    case 1:
        printf("1학년입니다.\n");
        break;
    case 2:
        printf("2학년입니다.\n");
        break;
    case 3:
        printf("3학년입니다.\n");
        break;
    default:
        printf("잘못된 값 입니다.\n");
        break;
    }

    return 0;
}




// 과제 2번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isleafyear(int year) {
    int isleaf = 0;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isleaf = 1;
            }
        }
        else {
            isleaf = 1;
        }
    }
    return isleaf;
}

void exerc() {
    int month;
    int days;
    printf("월(1~12)을 입력하세요 : ");
    scanf("%d", &month);
    if (month >= 1 && month <= 12) {
        int year;
        switch (month) {
        case 2:
            printf("input year : ");
            scanf("%d", &year);
            if (isleafyear(year) == 1) days = 29;
            else days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
        printf("%d월은 %d일까지 있습니다.", month, days);
    }
    else {
        printf("1부터 12사이의 값을 입력하세요.");
    }
}

int main()
{
    exerc();
    return 0;
}
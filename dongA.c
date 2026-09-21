#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define READ  0x01
#define WRITE 0x02
#define EXEC  0x04

// 처음 문제 (inch → cm, 섭씨 → 화씨)
void dong() {
    double inch, cm;
    double F, C;

    scanf("%lf", &inch);
    cm = inch * 2.54;
    printf("%lf inch는 %lf cm 입니다.\n", inch, cm);

    scanf("%lf", &C);
    F = (C * 1.8) + 32;
    printf("섭 씨 %lf 도는 화 씨 %lf도 입니다.\n", C, F);
}

// 15번: 초를 시·분·초로 변환
void q15() {
    int total = 7384;
    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;

    printf("%d시간 %d분 %d초\n", hours, minutes, seconds);
}

// 16번: 합격 여부 판단
void q16() {
    int score = 75;
    int attendance = 85;
    int passed = (score >= 60 && attendance >= 80);

    printf("합격 여부: %d\n", passed);
}

// 17번: EXEC 권한 추가
void q17() {
    unsigned int permission = READ | WRITE;

    if ((permission & (READ | WRITE)) == (READ | WRITE)) {
        permission |= EXEC;
    }
    printf("permission = 0x%02X\n", permission);
}

// 18번: 금액을 화폐 단위로 분해
void q18() {
    int amount;

    printf("금액을 입력하세요: ");
    scanf("%d", &amount);

    int won10000 = amount / 10000;
    amount %= 10000;
    int won1000 = amount / 1000;
    amount %= 1000;
    int won100 = amount / 100;
    amount %= 100;
    int won10 = amount / 10;

    printf("10000:%d 1000:%d 100:%d 10:%d\n",
        won10000, won1000, won100, won10);
}

// 19번: 윤년 판별
void q19() {
    int year;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    int div4 = (year % 4 == 0);
    int div100 = (year % 100 == 0);
    int div400 = (year % 400 == 0);

    int isLeap = (div4 && !div100) || div400;

    printf("%d\n", isLeap);
}

// 과제 1: 성적 가중평균
void task1() {
    int midterm, final_exam, homework;

    printf("중간, 기말, 과제 점수를 입력하세요: ");
    scanf("%d %d %d", &midterm, &final_exam, &homework);

    double weighted_score = midterm * 0.3 + final_exam * 0.4 + homework * 0.3;

    printf("weighted_score=%.2f\n", weighted_score);
}

// 과제 2: BMI 계산
void task2() {
    double height, weight;

    printf("키(m)와 몸무게(kg)를 입력하세요: ");
    scanf("%lf %lf", &height, &weight);

    double bmi = weight / (height * height);

    printf("bmi=%.2f\n", bmi);
}

int main()
{
    dong();
    q15();
    q16();
    q17();
    q18();
    q19();
    task1();
    task2();

    return 0;
}
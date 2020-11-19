#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studentTag {
    char name[10];
    int age;
    double score;
} student;

int main() {
    char name[10];
    int age =0;
    double score =0;
    double sum = 0;
    student *s;
    s = (student *) malloc(sizeof(student) * 5);

    if (s == NULL) {
        fprintf(stderr, "메모리가 부족해서 할당 할 수 없습니다.\n");
        exit(1);
    }

    for (int i = 0; i < 3; i++) {
        printf("이름 입력: ");
        scanf("%s", name);

        strcpy( (s+i) -> name, name);

        printf("나이 입력: ");
        scanf("%d", &age);
        (s+i) -> age = age;

        printf("평균 학점: ");
        scanf("%lf", &score);
        (s+i) -> score = score;
    }

    for(int i=0; i<3; i++){
        printf("%s %d %.1lf", (s+i)->name, (s+i)->age, (s+i)->score);
        printf("\n");
    }

    printf("학생의 이름을 검색하세요. \n");
    scanf("%s", name);

    for(int i=0; i<3; i++){
        if(!strcmp(name, (s+i) -> name)){
            printf("%s %d %.1lf", (s+i)->name, (s+i)->age, (s+i)->score);
            printf("\n");
        }
    }

    printf("평균 구하셈. \n");

    for(int i=0; i<3; i++){
        sum += (s+i) -> score;
    }
    printf("%.1lf", sum / 3);

    return 0;
}





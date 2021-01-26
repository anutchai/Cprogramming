#include <stdio.h>

void main(){

    int std1_math , std1_programming, std1_science;

    printf("*********************************\n");
    // printf("Please input score \n");
    // printf("Subject=> 1.m 2.p 3.c \n");
    
    printf("Student 1 : ");
    scanf("%d %d %d", &std1_math, &std1_programming, &std1_science);

    printf("score math %d program %d science %d",std1_math ,std1_programming ,std1_science);
}
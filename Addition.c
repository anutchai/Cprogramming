#include <stdio.h>
// ดึง Library Input Output


void main(){
// ส่วนที่ 2 Function หลักของภาษา C คือ Fx Main

// ------------- คำสั่งโปรแกรมบวกเลข -----------------//
    int num1, num2, total;
    // ประกาศตัวแปร num 1 num2 และ total

    printf("Value of num1 is :"); 
    scanf("%d" ,&num1);

    printf("Value of num2 is :"); 
    scanf("%d" ,&num2);

    total = num1 + num2;
    printf("Result is %d",total);

// ------------- สิ้นสุดโปรแกรมบวกเลข -----------------//

}
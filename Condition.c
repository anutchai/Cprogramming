
/* 1 เขียนโปรแกรมตัดเกรดแบบง่าย */
// กรอกคะแนน 75.25 = เกรดเท่าไหร
// 50 ผ่าน  น้อยกว่า 50 ตก

// > 80 = a   >=70 b  >=60 c  >=50 d  <50  f

#include <stdio.h>
// Import Library

int main(){

    //====================== Variable ===================//
        float score;
    //====================== Variable ===================//

    //====================== Input ======================//
        printf("Please input your score:");
        scanf("%f", &score);
    //====================== Input ======================//

    //====================== Process ======================//
        if(score >= 80){
            printf("Grade A!!");
        }else if(score >= 70){
            printf("Grade B!!");
        }else if(score >= 60){
            printf("Grade C!!");
        }else if(score >= 50){
            printf("Grade D!!");
        }else{
            printf("Grade F!!");
        }
    //====================== Process ======================//

    return 0 ;
}
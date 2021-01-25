#include <stdio.h>
// ส่วนที่ 1 ส่วนการดึง Library มาใช้

void main(void){
// ส่วนที่ 2 การสร้าง Function หลัก 

// ==================  ตัวแปร  ===================

char username[20], email[50], password[20] ,repassword[20];

int phone;

// ==================  ตัวแปร  ===================

// ==================  การรับข้อมูล  ===================

printf("Your username is:");
scanf("%s",&username);

printf("Your email is:");
scanf("%s",&email);

printf("Your password is:");
scanf("%s",&password);

printf("Your repassword is:");
scanf("%s",&repassword);

printf("Your phone is:");
scanf("%d",&phone);

// ==================  การรับข้อมูล  ===================

// ==================  การแสดงผลข้อมูล  ===================

printf("Success \n");
printf("Your username is: %s \n", username);
printf("Your email is : %s \n", email);
printf("Your phone is : %d \n", phone);
// return 0;

// ==================  การแสดงผลข้อมูล  ===================
}
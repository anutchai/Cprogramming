#include <stdio.h>

int main () {

   int  var = 20;   /* ค่าจริง */
   int  *ip;        /* ตัวแปร pointer */

   ip = &var;  /* เก็บค่าที่อยู่*/

   printf("Address of var variable: %p\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %p\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
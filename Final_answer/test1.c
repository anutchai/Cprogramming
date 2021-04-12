#include <stdio.h>

int main () {

   int num = 20;
   
   int *ip;        

   ip = &num; 

   printf("Result 1: %p\n", &num  );
   // address

   printf("Result 2: %p\n", ip );
   // address

   printf("Result 3: %d\n", *ip );
   // 20

   printf("Result 4: %d\n", num * (*ip) );

   return 0;

}
#include <stdio.h>

int main () {

   int var = 20+3;
   
   int *ip;        

   ip = &var; 

   printf("Result 1: %p\n", &var  );

   printf("Result 2: %p\n", ip );

   printf("Result 3: %d\n", *ip );

   return 0;

}
#include <stdio.h>

void addFive(int *ip)
{
    printf("%p \n", ip);
    *ip += 5;
}

int main()
{
    int myNum = 9;

    printf("myNum (before): %d\n", myNum); 

    addFive(&myNum);

    printf("myNum (after): %d\n", myNum); 

    return 0;
}
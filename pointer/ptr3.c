#include <stdio.h>

int main()
{
    // int number[5] = {10, 20, 30, 40, 50};
    // // int *myPointer = &number[0];
    // int *ip = number;
    // printf("first -> %d\n", *ip);
    // ip++;
    // printf("go next -> %d\n", *ip);
    // ip += 3;
    // printf("go next 3 -> %d\n", *ip);
    // ip--;
    // printf("go back -> %d\n", *ip);


    int number[5] = {10, 20, 30, 40, 50};
    int *ip = &number[2];

    printf("first -> %d\n", *ip);

    printf("go next -> %d\n", ip[-2]);

    printf("go next 3 -> %d\n", ip[2]);

    return 0;
}
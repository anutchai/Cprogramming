#include <stdio.h>
#include <string.h>
union Data {
    float salary;
    int workerNo;
    char str[20];
}data;

int main( ) {
    // data.salary = 10;
    data.workerNo = 220.5;
    strcpy( data.str, "C Programming");

    // printf( "data.salary : %d\n", data.salary);
    printf( "data.workerNo : %f\n", data.workerNo);
    printf( "j.str : %s\n", data.str);

    return 0;
}


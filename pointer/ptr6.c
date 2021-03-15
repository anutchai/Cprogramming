#include <stdio.h>

int main () {

    int  num18 = 2;

    int  *ip = &num18;

    printf("%d\n", (*ip)*3);

    return 0;
}
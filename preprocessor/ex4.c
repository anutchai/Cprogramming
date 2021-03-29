#include <stdio.h>
#define PI 3.1415  

#define MIN(a,b) ((a)<(b)?(a):(b))  
int main() {

    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );

}
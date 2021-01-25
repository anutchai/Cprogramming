#include <stdio.h>
// import library input and output
#include <stdbool.h>


void main(){

    //===================   ประกาศตัวแปร   ======================//

    int std[3][3];

    //==========================================================//

    //===================   คำสั่ง Input  ======================//


        printf("************************************************\n");
        printf("Plese input score in same line order by subject:\n");
        printf("Subject => 1.math\t 2.programming\t 3.science\t\n");
        printf("Student 1 : ");
        scanf("\t%d \t%d \t%d", &std[0][0],&std[0][1],&std[0][2]);
        printf("Student 2 : ");
        scanf("\t%d \t%d \t%d", &std[1][0],&std[1][1],&std[1][2]);
        printf("Student 3 : ");
        scanf("\t%d \t%d \t%d", &std[2][0],&std[2][1],&std[2][2]);
        printf("************************************************\n");
        printf("Total Score:\n");
        printf("Student 1 : %d\n", std[0][0]+std[0][1]+std[0][2]);
        printf("Student 2 : %d\n", std[1][0]+std[1][1]+std[1][2]);
        printf("Student 3 : %d\n", std[2][0]+std[2][1]+std[2][2]);
        printf("************************************************\n");
        // printf("Please input value 2 :");
        // scanf("%d", &num2);

    //==========================================================//
}
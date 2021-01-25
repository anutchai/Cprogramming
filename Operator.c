#include <stdio.h>
// import library input and output
#include <stdbool.h>


void main(){

    //===================   ประกาศตัวแปร   ======================//

    int num1, num2;
    float total;
    float example[10];

    bool result[10];

    //==========================================================//

    //===================   คำสั่ง Input  ======================//

        // printf("Please input value 1 :");
        // scanf("%d", &num1);

        // printf("Please input value 2 :");
        // scanf("%d", &num2);

    //==========================================================//

    //===================   คำสั่ง Process Operator ทางคณิตศาสตร์ ======================//

        // total = num1 + num2;
        // total = num1 - num2;
        // total = num1 * num2;
        // total = num1 / num2;
        // total = num1 % num2;
        // total = num1++; 
        // total = ++num1;
        // total = num2--;
        // total = --num2;

    //==============================================================================//

    //===================   คำสั่ง Process Operator ลำดับการทำงาน ======================//

        // example[1] = (1 + 1) * 3;
        // example[2] = example[1]++ - 1 ;
        // example[3] = -2 * 2 ;
        // example[4] = 4 * 2 + 5;
        // example[5] = 15 - 4 + 6 ;

    //==============================================================================//


    //===================   คำสั่ง Process Operator ทางตรรกะศาสตร์ ======================//

        result[1] = 3 > 2 ;
        result[2] = 200 <= 201 ;
        result[3] = 11 == 11 ;
        result[4] = 11 != 11 ;
        result[5] = 10 && 0 ;
        result[6] = 10 && 1 ;
        result[7] = (2 != 1) || 0 ;
        result[8] = (2 == 1) || 0 ;
        result[9] = !0 ;
        result[10] = !1 ;

    //==============================================================================//

    //===================   คำสั่ง Output  ======================//

        // ****  Output 1 **** //

        // printf("Result : %f", total);

        // ****  Output 2 **** //

        // printf("Example 1 : %f\n",  example[1]);
        // printf("Example 2 : %f\n",  example[2]);
        // printf("Example 3 : %f\n",  example[3]);
        // printf("Example 4 : %f\n",  example[4]);
        // printf("Example 5 : %f\n",  example[5]);

         // ****  Output 3 **** //

        for (int i = 1; i<=10;i++){
            printf("Example %d : %d\n", i ,result[i]);
        }
    //==========================================================//

}
#include <stdio.h>

void main(){

     // ================ Variable =========== //
        int money;
        int total = 50000;
    // ====================================== //
    
    // ================ Input =============== //
        printf("Please input your money : ");
        scanf("%d",&money);
    // ====================================== //

    // ================ Process ============ //
        if(money > 20000){
            printf("limit 20000 bath\n");
        }else if((money % 100) != 0){
            printf("Incorrect amount\n");
        }
        else{
            total = total - money;
            printf("total : %d \n", total);
        }

    // ===================================== //

    // ================ Output ======= ===== //
        printf("Thank you\n");
    // ===================================== //

}
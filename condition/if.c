#include <stdio.h>

void main(){

     // ================ Variable =========== //
        int money;
    // ====================================== //
    
    // ================ Input =============== //
        printf("Please input your money : ");
        scanf("%d",&money);
    // ====================================== //

    // ================ Process ============ //
        if(money >= 500000){
            printf("Don't get privilage\n");
        }else if(money >= 250000){
            printf("Get privilage 5000 bath\n");
        }
        else{
            printf("Get privilage 7000 bath\n");
        }

        money = (money > 1000) ? money + 500 : money + 1000 ;

        printf("Your money %d", money);
    // ===================================== //

    // ================ Output ======= ===== //
        printf("Thank you\n");
    // ===================================== //

}
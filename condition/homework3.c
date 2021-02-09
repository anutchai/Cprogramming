#include <stdio.h>

void main(){

     // ================ Variable =========== //
        float size;
    // ====================================== //
    
    // ================ Input =============== //
        printf("Please input your byte : ");
        scanf("%f",&size);
        // printf("%.2f",size);
    // ====================================== //

    // ================ Process ============ //
        if(size >= 1073741824){
            size /= 1073741824;
            printf("Size: %.2f GB\n", size);
        }else if (size >= 1048576){
            size /= 1048576;
            printf("Size: %.2f MB\n", size);
        }else if (size >= 1024){
            size /= 1024;
            printf("Size: %.2f KB\n", size);
        }else{
            printf("Size: %.2f Bytes\n", size);
        }
    // ===================================== //

    // ================ Output ======= ===== //
        printf("Thank you\n");
    // ===================================== //

}
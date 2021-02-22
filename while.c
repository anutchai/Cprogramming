#include <stdio.h>

void main()
{

    //====== Variable ======//
    char text;
    //====== Variable ======//

    // short cut key สำหรับจัด format code shift + alt + f

    //====== Input ======//
    printf("Please enter key (x) to exit");
    scanf("%c", &text);
    //====== Input ======//

    //====== Process ======//
    while (text != 'x'){
        scanf("%c", &text);
    }
    //====== Process ======//

    //====== Output ======//
    printf("Exit Program!!");
    //====== Output ======//


}
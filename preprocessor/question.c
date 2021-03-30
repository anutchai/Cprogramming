#include <stdio.h>
#include <math.h>

#define ROUND 3

#ifdef ROUND  
    // code
    #define SIZE 3
#endif


int grade(int scorce);

int salary[SIZE];
int student_no = 1;
int main(){


    printf("Input salary %d : ", student_no);
        scanf("%d", &salary[0]);
    printf("Input salary %d : ", student_no+=1);
        scanf("%d", &salary[1]);
    printf("Input salary %d : ", ROUND);
        scanf("%d", &salary[2]);
    grade(salary[0]);
    grade(salary[1]);
    grade(salary[2]);

    return 0 ;
}

int grade(int fx_s){

  if(fx_s >= 500000){
            printf("Don't get privilage\n");
        }else if(fx_s >= 250000){
            printf("Get privilage 5000 bath\n");
        }
        else{
            printf("Get privilage 7000 bath\n");
        }
    return 0;
}

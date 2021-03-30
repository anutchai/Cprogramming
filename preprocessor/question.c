#include <stdio.h>
#include <math.h>

#define ROUND 3

#ifdef ROUND  
    // code
    #define SIZE 3
#endif


int grade(int scorce);

int score[SIZE];
int student_no = 1;
int main(){


    printf("Input Student %d Score: ", student_no);
        scanf("%d", &score[0]);
    printf("Input Student %d Score: ", student_no+=1);
        scanf("%d", &score[1]);
    printf("Input Student %d Score: ", ++student_no);
        scanf("%d", &score[2]);
    grade(score[0]);
    grade(score[1]);
    grade(score[2]);

    return 0 ;
}

int grade(int fx_score){

    if(fx_score>100){
        printf("Error \n");
        return 0;
    }


    if(fx_score>=80 && fx_score<=100){
      printf("score grade 4 \n",fx_score);  
    }
    else if(fx_score>=70){
         printf("score grade 3 \n",fx_score);
        }
        else if(fx_score>=60) {
            printf("score grade 2 \n",fx_score);
        }
        else if(fx_score>=50){
             printf("score grade 1 \n",fx_score);
             }
        else{
             printf("score grade 0 \n",fx_score);
             }
    return 0;
}

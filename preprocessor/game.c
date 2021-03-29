#include <stdio.h> 
int main() {
    for(int score, i = 0; i < 3; i++){
        printf("Input Student Score: ");
        scanf("%d", &score);
        if(score>=80) printf("score grade 4 \n",score);
        else if(score>=70) printf("score grade 3 \n",score);
        else if(score>=60) printf("score grade 2 \n",score);
        else if(score>=50) printf("score grade 1 \n",score);
        else printf("score grade 0 \n",score);
    }    
}
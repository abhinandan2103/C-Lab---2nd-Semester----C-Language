#include<stdio.h>
int main(){
    int score,count=0,i=0;
    repeat:
        printf("enter the score of the player:");
        scanf(" %d",&score);
        if(score>=100){
            count++;
        }
        score=0;
        i++;
        if(i<=11){
            goto repeat;
        }
    printf("the no. of player scored century is: %d",count);
    return 0;

}
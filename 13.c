#include<stdio.h>
int main(){
    int i=0,s=0;
    repeat:
    printf("enter the name of the player");
    scanf("%c",&i);
    printf("enter the score of the player:");
    scanf("%d",&s);
    s++;
    i++;
    if(i<=11){
        goto repeat;
    }
    if(s>=100){
        printf("name of the player score century is %c",i);
        printf("the no. of player score century is :",s);
    }

}
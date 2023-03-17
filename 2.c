#include<stdio.h>
int main(){
    int p,q,r,s,v;
    printf("enter the value of pqrs:");
    scanf("%d %d %d %d ", &p, &q, &r, &s);
    if(p*s==r*q){
        printf("it is balanced");
    }
    else{
        v=r*q/s;
        printf("the variablr resistance would be: %d", v);
    }
}
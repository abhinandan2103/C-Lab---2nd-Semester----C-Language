#include<stdio.h>
int main(){
    int p,c,m,e,b;
    float avg;
    printf("enter the values of p:");
    scanf("%d",&p);
    printf("enter the values of c:");
    scanf("%d",&c);
    printf("enter the values of m:");
    scanf("%d",&m);
    printf("enter the values of e:");
    scanf("%d",&e);
    printf("enter the values of b:");
    scanf("%d",&b);
    avg=(p+c+m+e+b+0.8)/5;
    if(avg>59){
        printf("first grade");
    }
    else if(avg>49 && avg<=59){
        printf("second grade");

    }
    else if(avg>39 && avg<=49){
        printf("third grade");
    }
    else if(avg<40 && avg>0){
        printf("fail");
    }
    return 0;
}

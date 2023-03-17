#include<stdio.h>
int main(){
    int n,a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter n:");
    scanf("%d",&n);
    switch(n){
        case 1:
            int sum=a+b;
            printf("%d",sum);
        case 2:
            int mul=a*b;
            printf("%d",mul);
        case 3:
            float div=a/b;
            printf("%f",div);
        case 4:
            if(a>b){
                int sub=a-b;
                printf("%d",sub);
            }
            else{
                int sub=b-a;
                printf("%d",sub);
            }

    }
}
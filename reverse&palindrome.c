#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    int o=n;
    int original=n;
    while(o>0){
        int r=n%10;
        o=o/10;
        printf("%d",r);
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=0;
    for(int i=n;i>0;i--){
        sum=sum+i;
    }
    printf("the sum will be %d",sum);


}
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=0;i<=100;i+=3){
        sum=sum+i;
    }
    printf("the sum will be:%d",sum);
    return 0;
}
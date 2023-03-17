#include<stdio.h>
int main(){
    int a;
    for(int i=0;i<10;i++){
        printf("enter the number:");
        scanf("%d",&a);
        if(a%2!=0){
            printf("this is an odd number \n");

        }
        else{
            printf("this is an even number \n");
        }
    }
    return 0;
}
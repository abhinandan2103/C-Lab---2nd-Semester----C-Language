#include<stdio.h>
int main(){
    int p,f=0;
    for(int i=0;i<10;i++){
        printf("enter the number:");
        scanf("%d",&p);
        for(int i=2;i<=p/2;i++){
            if(p%i==0){
                f++;
                
            }

        }
        if(f>0){
            printf("this is a consonant \n");
        }
        else{
            printf("this is a prime number \n");
        }
    }
    return 0;
}
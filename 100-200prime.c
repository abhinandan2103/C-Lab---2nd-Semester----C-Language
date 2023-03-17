#include<stdio.h>
int main(){
    int i,check=0;
    for(i=200;i>=100;i--){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                check++;
            }

        }
        if(check==0){
            printf("the prime numbers are:%d\n",i);
        }
        check=0;
    }
    return 0;
}
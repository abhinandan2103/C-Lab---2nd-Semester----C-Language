#include<stdio.h>
int main(){
    int p;
    for(int i=200;i>=100;i--){
        for(int j=2;j<=i/2;j++){
            if(j%i!=0){
                printf("%d \n",i);
            }
        }
    }
    return 0;
}
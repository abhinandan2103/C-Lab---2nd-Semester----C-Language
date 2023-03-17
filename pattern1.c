#include<stdio.h>
int main(){
    int n=6;
    for(int i=1;i<=5;i++){
        for(int j=0;j<n-1-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("%d",i);
        }
        for(int l=0;l<n-1-i;l++){
            printf(" ");
        }
        for(int m=0;m<n-1-i;m++){
            printf(" ");
        }
        for(int n=0;n<2*i-1;n++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
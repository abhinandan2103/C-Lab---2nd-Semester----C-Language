#include<stdio.h>
int main(){
    int n=6;
    int second=5;
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
    for(int i=4;i>0;i--){
        for(int k=0;k<second-i;k++){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++){
            printf("%d",i);
        }
        for(int k=0;k<second-i;k++){
            printf(" ");
        }
        for(int k=0;k<second-i;k++){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++){
            printf("%d",i);
        }
        printf("\n");
        
    }
}
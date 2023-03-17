#include<stdio.h>
int main(){
    int n=9,m=8;
    for(int i=0;i<5;i++){
        for(int j=0;j<2*(i+1)-1;j++){
            printf("$");
        }
        for(int k=0;k<n-2*(i+1);k++){
            printf(" ");
        }
        for(int j=0;j<2*(i+1)-1;j++){
            printf("$");
        }
        for(int k=0;k<n-2*(i+1);k++){
            printf(" ");
        }
        for(int j=0;j<2*(i+1)-1;j++){
            printf("$");
        }
        printf("\n");
    }
    for(int i=4;i>0;i--){
        for(int j=0;j<(2*i)-1;j++){
            printf("$");
        }
        for(int k=0;k<n-(2*i);k++){
            printf(" ");
        }
        for(int j=0;j<(2*i)-1;j++){
            printf("$");
        }
        for(int k=0;k<n-(2*i);k++){
            printf(" ");
        }
        for(int j=0;j<(2*i)-1;j++){
            printf("$");
        }
        printf("\n");
    }
}
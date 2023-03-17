#include<stdio.h>
int main(){
    int n=7;
    char z='A';
    for(int i=7;i>0;i--){
        
        for(int j=0;j<i;j++){
            printf("%c",z);
        }
        for(int k=0;k<n-i;k++){
            printf(" ");    
        }
        for(int j=0;j<i;j++){
            printf("%c",z);
        }
        for(int k=0;k<n-i;k++){
            printf(" ");    
        }
        for(int j=0;j<i;j++){
            printf("%c",z);
        }

        
        printf("\n");
    }
}
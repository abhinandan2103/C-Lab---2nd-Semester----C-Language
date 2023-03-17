#include<stdio.h>
int main(){
    char a;
    printf("enter username:");
    scanf("%c",&a);
    
    if(a=='a'){
        int pass;
        printf("enter the password:");
        scanf("%d",&pass);
        if (pass==12345){
            printf("correct username and password");
        }
        else{
            printf("wrong password");
        }
        
    }
    else{
        printf("wrong username");
    }
    return 0;
}
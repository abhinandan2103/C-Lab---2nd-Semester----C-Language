#include<stdio.h>
void abhi(int lower){
    if(lower>=65 && lower<=90){
        printf("its a upper case");
    }
    else{
        char final=lower-32;
        printf("its upper case will be: %c",final);
    }

}
int main(){
    char ch;
    printf("enter your alphabet");
    scanf("%c",&ch);
    abhi(ch);
    return 0;
}
#include<stdio.h>
int gtokg(int g){
    float kg=g/1000;
    printf("%f",kg);
}
int main(){
    int g;
    printf("enter the value of g:");
    scanf("%d",&g);
    gtokg(g);
    return 0;
    
}
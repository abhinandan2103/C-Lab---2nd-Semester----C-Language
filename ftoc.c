#include<stdio.h>
float ftoc(float f){
    float c=(f-32)*(5.0/9.0);
    printf("the conversion in c will be %f",c);
}
int main(){
    float f;
    printf("enter the value of f:");
    scanf("%d",&f);
    ftoc(f);
    return 0;
}
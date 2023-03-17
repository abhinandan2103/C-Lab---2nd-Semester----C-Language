#include<stdio.h>
int main(){
    int n;
    printf("enter the number of which factorial we have to find");
    scanf("%d",&n);
    int m=1;
    for(int i=n;i>0;i--){
        m=m*i;
    }
    printf("the factorial will be: %d",m);
}
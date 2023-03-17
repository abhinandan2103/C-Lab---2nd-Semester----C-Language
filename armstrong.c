#include<stdio.h>
#include<math.h>
int main(){
    int n,s,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    int o=n;
    int z=n;
    int count=0;
    if(o>0){
        count++;
        o=o/10;
    }
    for(int i=0;i<=count;i++){
        s=z%10;
        int p=pow(s,count);
        sum=sum+p;
        z=z/10;
    }
    if(s==n){
        printf("it is armstrong");
    }
    else{
        printf("not armstrong");
    }

}
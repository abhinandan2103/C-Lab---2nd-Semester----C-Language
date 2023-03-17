#include<stdio.h>
int main(){
    char h,e,l,u,o;
    for(h='a';h<'h';h++){
        printf("%c\n",h);
    }
    for(e='a';e<'e';e++){
        printf("%c%c\n",h,e);
    }
    for(l='a';l<'l';l++){
        printf("%c%c%c\n",h,e,l);
    }
    for(u='a';u<'l';u++){
        printf("%c%c%c%c\n",h,e,l,u);
    }
    for(o='a';o<='o';o++){
        printf("%c%c%c%c%c\n",h,e,l,u,o);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int count=0;
    char ch;
    do{
        scanf("%c",&ch);
        if(ch!=' '&&ch!='\n')count++;
        else continue;
    }while(ch!='\n');
    printf("%d",count);
    return 0;
}
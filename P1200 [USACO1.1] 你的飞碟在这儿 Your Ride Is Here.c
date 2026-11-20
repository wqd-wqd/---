#include<stdio.h>
#include<string.h>
int main(){
    char a[7];
    char b[7];
    scanf("%s %s",a,b);
    int suma=1,sumb=1;
    for(int i=0;i<strlen(a);i++)suma*=(a[i]-'A'+1);
    for(int i=0;i<strlen(b);i++)sumb*=(b[i]-'A'+1);
    if(suma%47==sumb%47)printf("GO");
    else printf("STAY");
    return 0;
}
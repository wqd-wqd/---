#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    int i=0;
    char a[62599]={0};
    while(scanf("%c",&ch)==1){
        if(ch=='E')break;
        if(ch=='W'||ch=='L'){
        a[i++]=ch;
        }
    }
    a[i]='\0';
    int w=0,l=0;
    int j=0;
    while(a[j]!='\0'){
        if(a[j]=='W'){w++;}
        else {l++;}
        j++;
        if((w>=11||l>=11)&&abs(w-l)>=2){
            printf("%d:%d\n",w,l);
            w=0,l=0;
        }
    }
        printf("%d:%d\n",w,l);
        printf("\n");
        w=0,l=0;
        j=0;
    while(a[j]!='\0'){
        if(a[j]=='W'){w++;}
        else {l++;}
        j++;
        if((w>=21||l>=21)&&abs(w-l)>=2){
            printf("%d:%d\n",w,l);
            w=0,l=0;
        }
    }
        printf("%d:%d\n",w,l);
        return 0;
}
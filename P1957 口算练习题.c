#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[100];
    char i[100];
    int x,y,result;
    char operator,ot;
    for(int j=0;j<n;j++){
        scanf("%s",a);
        char op=a[0];
        if(op=='a'||op=='b'||op=='c'){
            scanf("%d %d",&x,&y);
            ot=op;
        }else{
            sscanf(a,"%d",&x);
            scanf("%d",&y);
        }
        if(ot=='a')operator='+';
        if(ot=='b')operator='-';
        if(ot=='c')operator='*';
        switch(ot){
            case 'a':sprintf(i,"%d%c%d=%d",x,operator,y,x+y);break;
            case 'b':sprintf(i,"%d%c%d=%d",x,operator,y,x-y);break;
            case 'c':sprintf(i,"%d%c%d=%d",x,operator,y,x*y);break;
        }
        printf("%s\n%d\n",i,strlen(i));
    }
    return 0;
}
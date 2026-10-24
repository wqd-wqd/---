#include<stdio.h>
int isprime(int n){
    if(n%2==0)return 0;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=11;i++){
        if(isprime(i)&&i<=b)printf("%d\n",i);
    }
    for(int d1=1;d1<=9;d1++){
        for(int d2=0;d2<=9;d2++){
            int m=d1+d2*10+d1*100;
            if(isprime(m)&&m>=a&&m<=b)printf("%d\n",m);
        }
    }
    for(int d1=1;d1<=9;d1++){
        for(int d2=0;d2<=9;d2++){
            for(int d3=0;d3<=9;d3++){
                int m=d1+d2*10+d3*100+d2*1000+d1*10000;
                if(isprime(m)&&m>=a&&m<=b)printf("%d\n",m);
            }
        }
    }
    for(int d1=1;d1<=9;d1++){
        for(int d2=0;d2<=9;d2++){
            for(int d3=0;d3<=9;d3++){
                for(int d4=0;d4<=9;d4++){
                    int m=d1+d2*10+d3*100+d4*1000+d3*10000+d2*100000+d1*1000000;
                    if(isprime(m)&&m>=a&&m<=b)printf("%d\n",m);
                }
            }
        }
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    double a1=(1.0+sqrt(5))/2;
    double b1=(1.0-sqrt(5))/2;
    double a2=a1,b2=b1;
    if(n==0){printf("0.00");}
    else{ for(int i=1;i<n;i++){
        a2*=a1;
        b2*=b1;
    }
    printf("%.2f",(a2-b2)/sqrt(5));
}
return 0;
}
#include<stdio.h>
#include<math.h>
double square(double a){
    return a*a;
}

double side(double *a,double *b){
    double side=sqrt(square(a[0]-b[0])+square(a[1]-b[1]));
    return side;
}

int main(){
    double a[3][2];
    int i=0;
    double sum=0;
    int n=3;
    while(scanf("%lf %lf",&a[i][0],&a[i][1])==2)i++;
    for(int j=0;j<n;j++){
        for(i=j+1;i<n;i++){
            sum+=side(a[i],a[j]);
        }
    }
    printf("%.2f",sum);
    return 0;
}
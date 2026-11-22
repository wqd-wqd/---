#include <cstdio>
using namespace std;

long long m[25][25][25];

long long w(long long a, long long b, long long c){
    if(a<=0 || b<=0 || c<=0) return 1;
    if(a>20 || b>20 || c>20) return w(20, 20, 20);
    if(m[a][b][c]) return m[a][b][c];

    long long ans;
    if(a<b && b<c)
        ans = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
    else
        ans = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
    m[a][b][c] = ans;
    return ans;
}

int main(){
    long long a, b, c;
    while(scanf("%lld %lld %lld", &a, &b, &c) == 3){
        if(a==-1 && b==-1 && c==-1) break;
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a,b,c));
    }
    return 0;
}
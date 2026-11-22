#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long gcd(long long a,long long b){
    return b?gcd(b,a%b):a;
}

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    long long d=0;
    for(int i=1;i<n;i++)d=gcd(d,a[i]-a[i-1]);
    if(d==0)cout<<n;
    else cout<<(a[n-1]-a[0])/d+1;
    return 0;
}
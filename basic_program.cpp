#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int factorial(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res=(res*i)%mod;
    }
    return res%mod;
}

int main(){
    int n=5;
    cout<<factorial(n)<<endl;
    return 0;
}
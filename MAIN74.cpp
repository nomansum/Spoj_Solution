#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll unsigned long long
pair<ll, ll> fib (ll n) {
    if (n == 0)
        return {0, 1};

    pair<ll,ll> p= fib(n >> 1);
    ll c = ((p.first%M) * (((2 * p.second)%M) - (p.first%M)+M))%M;
    ll d = (((p.first)%M * (p.first)%M) + ((p.second%M) * (p.second%M))%M)%M;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}
int main(){

	int t;
	cin>>t;
	while(t--){
pair<ll,ll>p,q,ans;
ll n;
cin>>n;
 p=fib(n+3);
 if(n==0)cout<<0<<endl;
 else if(n==1)cout<<2<<endl;
 else 
cout<<(p.first)%M<<"\n";

}

return 0;
}

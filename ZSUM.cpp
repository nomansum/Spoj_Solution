/*
SPOJ JUST ADD IT
https://www.spoj.com/problems/ZSUM/
cyr9879
ALGO::NULL
COMMENT::NULL
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m=10000007;
ll binmod(ll a,ll b){
	if(b==0)return 1;
     a%=m;
     ll ans=1;
     while(b>0){
        if(b&1)ans=ans*a%m;
        a=a*a%m;
        b>>=1;

     }
return ans;

}

int main(){
	ll a,b;
while(~scanf("%lld %lld\n",&a,&b)){
 ll  n=0;
  if(a==0)break;
  {
         n+=binmod(a,b);
         
         n+=(2*binmod(a-1,b))%m;
        
         
         n+=(2*binmod(a-1,a-1))%m;
     
         n+=binmod(a,a);
       
         n%=m;
         printf("%lld\n",n);

  }

}
	return 0;
}

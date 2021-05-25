            //Then which of your Lord's favours will you both deny?
         
    #include<stdio.h>
    #include<iostream>
    #include<cstring>
    #include<string>
    #include<vector>
    #include<algorithm>
    #include<cmath>
    #include<map>
    #include<sstream>
    #include<set>
    #include <queue>
    #define pb push_back
    #define ms(a,v) memset(a,v,sizeof a)
    using namespace std;
    typedef long long ll;
    #define MAXN 30007
    #define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
    #define For(i,n) for( __typeof(n)i = 1 ; i <= n ; i++)
    #define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)
    #define mod 1000000007
    #define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
      ll gcd(ll a ,ll b){
          while(b^=a^=b^=a%=b);
          return a;
        }
    int par[MAXN],size[MAXN];
     
    int find(int u){
        if(par[u]==u)return u;
        return par[u]=find(par[u]);
     
    }
    void initiate(){
        for(int i=0;i<MAXN;++i){
            par[i]=i;
            size[i]=1;
        }
     
    }
     
    bool DSU(int u,int v){
       
        u=find(u);
        v=find(v);
        if(u!=v){
            if(size[u]<size[v])swap(u,v);
            par[v]=u;
            size[u]+=size[v];
            return true;
        }
     
    return false;
     
     
    }
     
     
     
     
    int main(){
     initiate();
      bool fl=true;
    int n,m,i,j,tot=0;
    cin>>n>>m;
    j=m;
    int p=n;
    for(i=0;i<m;++i){
        cin>>n>>m;
        if(!DSU(n,m))fl=false;
    }
    for(i=1;i<=n;++i){
        if(par[i]==i)tot++;
    }
     
        if(tot==1 && fl && j==p-1)cout<<"YES\n";
    else cout<<"NO\n";
     
           
    return 0;
     
    } 

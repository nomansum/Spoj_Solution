        //Then which of your Lord’s favours will you both deny?
     
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
int tmp=0,n,m,tmp1=0;
char arr[55][55];
int move_x[]={0,0,1,-1,-1,-1,1,1};
int move_y[]={-1,1,0,-1,0,1,-1,1};
int visited[55][55];
void cal_move(int x,int y,int l){
       
       for(int i=0;i<8;++i){
        int xx=x+move_x[i];
        int yy=y+move_y[i];
          if(xx>=n || xx<0 || yy>=m || yy<0 || visited[xx][yy]==1)continue;
          else if(arr[xx][yy]==l+1){
            tmp++;
            visited[xx][yy]=1;
            cal_move(xx,yy,l+1);
          }
       
       }

        tmp1=max(tmp,tmp1);
          tmp--;


}

int main(){
int t=1;
while(~scanf("%d %d",&n,&m)){

    if(n==0)break;
    vector<pair<int,int>>start;
     int i,j,tot=0,A='A';
     rep(i,n){
        scanf("%s",arr[i]);
        for(j=0;j<strlen(arr[i]);++j){
         if(arr[i][j]=='A')start.pb({i,j});
            }

        }
      
   for(i=0;i<start.size();++i){
    tmp=0;tmp1=0;
    ms(visited,0);
      cal_move(start[i].first,start[i].second,A);
     if(tmp1>tot)tot=tmp1;
   }
     if(start.size()==0)tot=-1;
  printf("Case %d: %d\n",t++,++tot);
}
return 0;

}
     
     
    

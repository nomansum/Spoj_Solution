//SPOJ THE SHORTEST PATH PROBLEM
//cyr9879
//ALGO::DIJKSTRA
//PROBLEM COMMENT::DIRECTED GRAPH AND UNORDERED MAP REDUCES TIME COMPLEXITY
#include<bits/stdc++.h>
using namespace std;
#define sz 1000009
#define ll long long
#define inf 35000000
int cost[350000];
void init(int n){for(int i=0;i<=n;++i)cost[i]=inf;}
void dijkstra(int n,int st,vector<vector<int>>&adj,vector<vector<int>>&w){
           priority_queue<pair<int,int>>pq;
           init(n);
           cost[st]=0;
           
           pq.push({0,st});
           while(!pq.empty()){
               int node=pq.top().second;
               int c=-pq.top().first;
               pq.pop();
               for(int i=0;i<adj[node].size();++i){
                     int u=adj[node][i];
                     if(c+w[node][i]<cost[u]){
                     	cost[u]=c+w[node][i];
                     	pq.push({-cost[u],u});
 
                     }
 
 
               }              
 
           }
           return ;
}
 
 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,i,j,k,l;
		scanf("%d",&n);
		vector<vector<int>>adj(n+1),w(n+1);
		unordered_map<string ,int>mp;
              
              for(i=1;i<=n;++i){
              	string s;
              	cin>>s;
              	mp[s]=i;
              	cin>>m;
              	for(j=0;j<m;++j){
              		scanf("%d %d",&k,&l);
              		adj[i].push_back(k);
              		
              		w[i].push_back(l);
              		
              	}
              }
             int q;
             scanf("%d",&q);
            // init(n);
             for(i=0;i<q;++i){
             	string s,ss;
             	cin>>s>>ss;
             	dijkstra(n,mp[s],adj,w);
             
             	cout<<cost[mp[ss]]-cost[mp[s]]<<'\n';
 
             }
 
  
 
	}
	return 0;
}
 

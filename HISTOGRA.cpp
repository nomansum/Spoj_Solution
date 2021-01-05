/*
Cyr9879
Spoj Histogram Problem
*/
#include<bits/stdc++.h>
using namespace  std;
#define PB push_back
#define ll long long
int main(){
 
     ll  t;
     while(true){
      cin>>t;
            if(t==0)break;
          stack<ll>st;
          vector<ll>v(t+1);
         ll ans=-1,tmp=-1,i,j,tot=0;
          for(i=0;i<t;++i)cin>>v[i];
            i=0;
         while(i<t){
                if(st.empty()){st.push(i);++i;}
                else if(v[st.top()]<=v[i]){st.push(i);++i;}
                else{
                      while(!st.empty() && v[st.top()]>=v[i]){
                        j=st.top();
                        st.pop();
                        if(st.empty())tmp=v[j]*i;
                        else tmp= v[j] *(i-st.top()-1);    
                        ans=(tmp>ans)?tmp:ans;   
 
                                              }
                                              st.push(i);
                }
         }
        while(!st.empty() && v[st.top()]>=v[i]){
                        j=st.top();
                        st.pop();
                        if(st.empty())tmp=v[j]*i;
                        else tmp= v[j] *(i-st.top()-1);    
                        ans=(tmp>ans)?tmp:ans;   
 
                                              }
                                              cout<<ans<<endl;
 
     }
   return 0;
} 

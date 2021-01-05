/*
SPOJ THE NEXT PALINDROME PROBLEM
https://www.spoj.com/problems/PALIN/
cyr9879
ALGO::NULL
COMMENT::NULL
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool check(string s){
	for(int i=0;i<s.length();++i)if(s[i]!='9')return false;
		return true;
}
int main(){
   int t;
   cin>>t;
   while(t--){
          string s;
          int  n,m,i,j,car=0;
          cin>>s;n=s.length();
          if(check(s)){
                     string ans;
                     ans+='1';
                     for(i=1;i<n;++i)ans+='0';
                     	ans+='1';
                          cout<<ans<<endl;
                          continue;
          }
          i=n/2;j=i;
          if(n&1);
          else i--;
          while(i>=0 && s[i]==s[j]){--i;++j;}
          if(i<0 || s[i]<s[j]){
                     i=n/2;j=i;
          if(n&1);
          else i--;
          car=1;
          while(i>=0){
          	m=s[i]-'0'+car;
          	car=m/10;
          	s[i]=(m%10)+'0';
                  s[j]=s[i];
                  --i;++j;
          }       
          }
          else {
                   while(i>=0){
                   	s[j]=s[i];
                   	--i;++j;
                   }
 
          }
 
          cout<<s<<endl;
   }
 
return 0;
} 

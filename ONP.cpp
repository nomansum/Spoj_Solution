/*
SPOJ TRANSFORM THE EXPRESSION
https://www.spoj.com/problems/ONP/
cyr9879
ALGO::NULL
COMMENT::USE STACK .. REVERSE POLISH NOTATION CONCEPT
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
char arr[5]={'+','-','*','/','^'};
int main(){
int t;
cin>>t;
while(t--){
stack <char>st;
 
 map<char ,int >mp;
 mp['+']=1;mp['-']=2;mp['*']=3;mp['/']=4;mp['^']=5;
string s;
string ans;
cin>>s;
int n=s.size();
for(int i=0;i<n;++i){
   if(s[i]=='('){st.push(s[i]);continue;}
   else if(s[i]==')'){while(st.top()!='('){ans+=st.top();st.pop();}
                       st.pop();continue;
}
     else if(s[i]>='a' && s[i]<='z'){ans+=s[i];continue;}
for(int j=0;j<5;++j){
	if(s[i]==arr[j]){
		if(st.empty()|| mp[st.top()]<mp[s[i]])st.push(s[i]);
		else {
			while(st.top()!='('||mp[st.top()]>=mp[s[i]]){ans+=st.top();st.pop();}
			st.push(s[i]);
		}
	}
}
 
 
}
cout<<ans<<endl;
 
}
return 0;
 
}
 

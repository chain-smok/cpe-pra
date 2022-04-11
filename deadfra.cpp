#include <bits/stdc++.h>
using namespace std;
int gcd(int i,int j){
  while(j)swap(i%=j,j);
  return abs(i);
}
int main()
{
  string s;
  while(cin>>s,s!="0"){
   s=s.substr(0,s.size()-3).substr(2);
   int ansu,ansd=INT_MAX,n=s.size();
   for(int k=1;k<=n;k++){
      int u=atoi(s.c_str())-
          atoi(s.substr(0,n-k).c_str());
      int d=pow(10.,n)-pow(10.,n-k);
      int g=gcd(u,d);u/=g,d/=g;
      if(d<ansd)ansd=d,ansu=u;
   }
   cout<<ansu<<"/"<<ansd<<endl;
  }
}
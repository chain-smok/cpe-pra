#include <bits/stdc++.h>
using namespace std;
int ans[32];
int main()
{
  unsigned int T,N;
  cin>>T;
  while(T--){
   cin>>N;
   if(N==0){
      cout<<10<<endl;
      continue;
   }else if(N==1){
      cout<<1<<endl;
      continue;
   }
   int len=0;
   for(int d=9;d>=2;d--){
     while(N%d==0){
       N/=d;
       ans[len]=d;
       len++;
     }
   }
   if(N==1){
     for(int i=len-1;i>=0;i--){
        cout<<ans[i];
     }
     cout<<endl;
   }else{
     cout<<-1<<endl;
   }
  }
}
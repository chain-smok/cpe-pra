#include <bits/stdc++.h>
using namespace std;
int main()
{
  int vt,v0;
  while(cin>>vt>>v0){
    if(vt==0&&v0==0)
     break;
    int r=vt%(2*v0);
    if(r==v0){
       cout<<0<<endl;
    }
    else if(r<v0){
       cout<<vt/(2*v0)<<endl;
    }  
    else{
       cout<<vt/(2*v0)+1;
    }
}
}
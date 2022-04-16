#include <bits/stdc++.h>
using namespace std;
int sign(int X)
{
  if(X>0)return 1;
  if(X<0)return -1;
  if(X==0)return 0;
}
int main(){
  int n,a,b,sx[101],sy[101],k,diff,s;
  while(cin>>n&&n){
    for(k=0;k<2*n;k++)cin>>sx[k]>>sy[k];
    for(a=-500;a<=500;a++){
        for(b=-500;b<=500;b++){
         for(diff=k=0;k<2*n;k++){
            if(s=sign(a*sx[k]+b*sy[k]))diff+=s;
            else {diff=1;break;}
         }
         if(diff)continue;
         cout<<a<<" "<<b<<endl;
         a=b=1000;
        }
    }
  }                  
}
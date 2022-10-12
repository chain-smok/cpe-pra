#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
  int T,N;
  int num[40];
  while(cin>>T){
    while(T--){
      memset(num,0,40);
      int cnt=0;
      cin>>N;
      if(N!=1){
      for(int i=9;i>1;i--){
        while(N%i==0){
          num[cnt++]=i;
          N/=i;
        }
        if(N==1)break;
       }
      if(N==1){
        sort(num,num+cnt);
      for(int i=0;i<cnt;i++){
        cout<<num[i];
      }
      cout<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
   }else{
        cout<<"1"<<endl;
    }
   }      
  }
}
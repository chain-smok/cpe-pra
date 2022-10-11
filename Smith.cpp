//位數和=質因數和=>Smith number(質數不算)
#include <bits/stdc++.h>
using namespace std;
//位數和
int DigitSum(int n){
  int sum=0;
  while(n>0){
    sum+=(n%10);
    n/=10;
  }
  return sum;              
}
//質因數和
int FactorDigitSum(int n){
  int sum=0;
  int tmp=n;
  for(int i=2;i*i<=tmp;++i){
     while(tmp%i==0){
       tmp/=i;
       sum+=DigitSum(i);
     }
  }
  if(n!=tmp){
   if(tmp!=1)
     sum+=DigitSum(tmp);
    return sum;
  }
  else 
    return 0;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ans=n+1;
    while(1){
        if(DigitSum(ans)==FactorDigitSum(ans))
          break;
        else
          ++ans;
    }
   cout<<ans<<endl;
  }
}
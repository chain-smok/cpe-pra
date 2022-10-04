#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int gcd(int a,int b,int &x,int &y){
  if(a==0||a==b){
    x=0;
    y=1;
    return b;}
  else{
  int xp,yp;
  int g = gcd(b%a, a, xp, yp);
  x = yp - b/a * xp, y = xp; // p := previous
  return g;
}
}
int main(){
 int m,n,x,y,d;
 while(cin>>m>>n){
   //if(m>n)swap(m,n);
   int d=gcd(m,n,x,y);
   cout<<x<<" "<<y<<" "<<d<<endl;
 }
} 

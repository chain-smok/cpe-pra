#include<iostream>
#include<cstdio>
using namespace std;
void multiply(string a,string b){
 int X[255] , Y[255] , answer[510] = {0};
 int xlen, ylen, anslen;
    xlen = a.length();
    for( int i = 0 ; i < xlen ; i++ )
      X[i] = a[xlen-i-1] - '0';//14->41000000000

    ylen = b.length();
    for( int i = 0 ; i < ylen ; i++ )
      Y[i] = b[ylen-i-1] - '0';//22222224444->44442222222
    for( int i = 0 ; i < xlen ; i++ )
      for( int j = 0 ; j < ylen ; j++ ){
        answer[i+j] += X[i] * Y[j];
        // (1)ans[1]=1+4*4=17(i=0,j=1)(3)ans[2]=2+1*4=6(i=1,j=1)
        // (2)ans[1]=7+1*4=11(i=1,j=0)(4)ans[2]=6+4*4=22(i=0,j=2) 
        answer[i+j+1] += answer[i+j]/10;
        // (1)ans[2]=17/10=1
        // (2)ans[2]=1+11/10=2 
        answer[i+j]%=10;
        // (1)ans[1]=17%10=7 (3)ans[2]=6%10=6
        // (2)ans[1]=11%10=1 (4)ans[2]=2
      }
    anslen = xlen+ylen;
    while( anslen > 1 && !answer[anslen-1] ) anslen--;

    for( int i = anslen-1 ; i >= 0 ; i-- )
      printf( "%d", answer[i] );
    printf( "\n" );
}
int main(){
  string x,y;
  while(cin>>x>>y){
   multiply(x,y);
  }
  return 0;
}

//input:index,output:Fib(input)
 #include<iostream>
#include<cstdio>
using namespace std;

int dp[5001][5001] = {0};

int main(){
  dp[1][0] = 1;
  for( int i = 2 ; i <= 5000 ; i++ )
    for( int j = 0 ; j <=5000 ; j++ ){
      dp[i][j] += dp[i-1][j] + dp[i-2][j];
      dp[i][j+1] += dp[i][j]/10;
      dp[i][j] %= 10;
    }

  int n, i;
  while( scanf( "%d", &n ) != EOF ){
    printf( "The Fibonacci number for %d is ", n );
    for( i = 5000 ; i >= 0 ; i-- )
      if( dp[n][i] )
        break;
    if( i == -1 )
      printf( "0" );
    else
      for( ; i >= 0 ; i-- )
        printf( "%d", dp[n][i] );
    printf( "\n" );
  }
  return 0;
}
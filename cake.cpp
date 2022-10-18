//cherry has 2N.
//We need to find the line which
//can half cake.
//(AX+BY>0)&&(AX+BY<0)=true
#include <iostream>
using namespace std;
typedef struct cake{
  int x,y;
}cake;
cake cherry[100]; 
int main(){
  int N,l,r;
  while(cin>>N&&N){
    for(int i=0;i<2*N;i++){
        cin>>cherry[i].x>>cherry[i].y;
    }
    int flag=1;
    for(int A=-500;A<=500&&flag;A++)
      for(int B=-500;B<=500&&flag;B++){
        l=0,r=0;
        for(int i=0;i<2*N;i++){
          l+=(A*cherry[i].x+B*cherry[i].y<0);
          r+=(A*cherry[i].x+B*cherry[i].y<0);
        }
        if(l==N&&r==N){
          flag=0;
          cout<<A<<" "<<B<<endl;
        }
      }
  }
}
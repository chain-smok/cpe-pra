//(abcd)^1=abcd,max=1
//(a)^4=aaaa,max=4
//(ab)^3=ababab,max=3
//find the max of exp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char s[1000001];
  while(scanf("%s",s)!=EOF){
    if(strcmp(s,".")==0)break;
    int len=strlen(s);
    bool flag=false;
    for(int i=1;i<=len;i++){
       if(len%i!=0)continue;
       bool flag=true;
    for(int j=i;j<len&&flag==true;j+=i)
      for(int k=0;k<i&&flag==true;k++)
       if(s[k]!=s[k+j])flag=false;
       if(flag==true){printf("%d\n",len/i);break;}
    }
     
  }
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num[1234567];
int m;
int main(){
    int t;
    int a,b;
    int i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        for(i=m-1;i>=0;--i){
            scanf("%d %d",&a,&b);
            num[i] = a+b;
        }
        num[m] = 0;
        for(i=0;i<m;++i){
            num[i+1] += num[i]/10;
            num[i] %= 10;
        }
        for(i=m;i>0 &&num[i]==0;--i);
        for(;i>=0;--i)putchar(num[i]+'0');
        puts("");
        if(t)puts("");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main(){
  int N, m, count;
  int k[100];
  while(scanf("%d",&N)){
    if(N==0)break;
    for (m = 1; m < 500; m++) {
				bool OK = true;
				for (int q = 1; q < 100; q++)
					k[q] = 0;

				int j = 1;
				count = 0;
				k[1] = 1;

				while (true) {  
					j++;
					if (j > N) //over N
						j -= N;
					if (k[j] == 0) {
						count++;
						if (count == m) { 
							k[j] = 1;
							count = 0;
						}
					}

					if (k[13] == 1) 
						break;
				}
				
				for (int i = 1; i <= N; i++) {
					if (k[i] == 0) {
						OK = false;
						break;
					}
				}

				if (OK) {
					printf("%d\n", m);
					break;
				}
			}
  }
}
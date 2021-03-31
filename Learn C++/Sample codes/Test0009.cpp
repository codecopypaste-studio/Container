#include<stdio.h>
  int main(){
  	int num[3], s, A, B, C;
  	char let[3];
  	scanf("%d %d %d", &num[0], &num[1], &num[2]);	
    for(int m=0; m<2; ++m)
    for(int n=m+1; n<3; ++n){
    		if(num[m]>num[n]){
    			 s=num[n];
    			 num[n]=num[m];
    			 num[m]=s;
			}
		}
	scanf("%s", &let);
	for(int a=0; a<3; ++a){
		printf("%d\t", num[let[a]-'A']);
	}
	return 0;
  }

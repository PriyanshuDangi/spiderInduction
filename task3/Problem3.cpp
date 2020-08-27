#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	int c = 0;
	int prime;
	for(i = 2; i <= n; i++){
		prime = 1;
		for(j=2; j<i; j++){
			if(i%j == 0){
				prime = 0;
				break;
			}
		}
		if(prime){
			c++;
		}
	}
	int answer = (c*(c+1))/2;
	printf("%d", answer);
	return 0;
}

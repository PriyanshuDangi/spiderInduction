#include<stdio.h>
#include<string.h>

int main(){
	char n[100000];
	scanf("%s", &n);
	int i, b, c, count = 0;
	b = 0;
		if(strlen(n) > 1){
			for (i=0; i < strlen(n); i++){
				b += n[i] - '0';
				count = 1;
			}
			while(b/10 > 0){
				c = b;
				b = 0;
					while(c/10 > 0){
						b += c%10;
						c = c/10;
					}
					b += c;
					count++;
				}
			}
	printf("%d", count);
	return 0;
}

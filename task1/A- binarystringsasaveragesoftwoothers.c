#include <stdio.h>
#include <string.h>

void subtractOne(char *result1, int n){
	int i = n -1;
	while(result1[i] == '0' && i >= 0){
		result1[i] = '1';
		i--;
	}
	if(i <= 0){
		printf("-1");
		exit(0);
	}
	result1[i] = '0';	
}

void addOne(char *result1, int n){
	int i = n -1;
	while(result1[i] == '1' && i >= 0){
		result1[i] = '0';
		i--;
	}
	if(i <= 0){
		printf("-1");
		exit(0);
	}
	result1[i] = '1';	
}

int main() {
	int n;
	scanf("%d", &n);
	char bin[n+1];
	char result1[n+1];
	scanf("%s", bin);
	strcpy(result1, bin);
	subtractOne(result1, n);
	addOne(bin, n);
	printf("%s ", result1);
	printf("%s", bin);
	return 0;
}

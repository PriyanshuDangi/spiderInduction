#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char str[n];
	scanf("%s", &str);
	if(n == 1){
		printf("0");
		return 0;
	}
	char arr[n/2];
	int degree = 0;
	strncpy(arr, str, n/2);
	arr[n/2] = '\0';
	while(strcmp(str + n/2, arr) == 0){
		degree++;
		n = n/2;
		strncpy(str, str, n);
		str[n] = '\0';
		strncpy(arr, str, n/2);
		arr[n/2] = '\0';
	}
	printf("%d", degree);
	return 0;
}

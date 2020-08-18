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


//#include <stdio.h>
//#include <string.h>
//
//int subtractone(char str[], int n){
//	int m = 1;
//	int i = n-1;
//	int x = str[i] - '0';
////	printf("%d\n", x&m);
//	while(!(x&m) && i >= 0){
//		str[i] = x ^ m + '0';
//		printf("%c\n", str[i]);
//		i--;
//		x = str[i] - 48;
//		m = 1;
//	}
//	printf("%s", str);
//}
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	char str[n];
//	scanf("%s", str);
//	int result1[n];
//	int result2[n];
//	subtractone(str, strlen(str));
////	printf("%s", result1);
//}

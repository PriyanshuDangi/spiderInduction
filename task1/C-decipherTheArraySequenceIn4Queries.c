#include <stdio.h>

int main() {
	int arr[6] = {7, 9, 10, 43, 16, 8};
	int query[4];
	int result[6];
	printf("1 2 : ");
	scanf("%d", &query[0]);
	printf("1 3 : ");
	scanf("%d", &query[1]);
	printf("4 5 : ");
	scanf("%d", &query[2]);
	printf("4 6 : ");
	scanf("%d", &query[3]);
	int i = 0;
	int query1 = 1;
	int query2 = 1;
	while(i < 6){
		if(query1 && query[0]%arr[i] == 0 && query[1]%arr[i] == 0){
			query1 = 0;
			result[0] = arr[i];
			result[1] = query[0]/arr[i];
			result[2] = query[1]/arr[i]; 
		}
		if(query2 && query[2]%arr[i] == 0 && query[3]%arr[i] == 0){
			query2 = 0;
			result[3] = arr[i];
			result[4] = query[2]/arr[i];
			result[5] = query[3]/arr[i];
		}
		i++;
	}
	for(i=0; i < 6; i++){
		printf("%d ", result[i]);
	}
	return 0;
}

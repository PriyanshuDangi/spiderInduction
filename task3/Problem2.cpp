#include<stdio.h>

void sort(int arr[], int n){
	int i , j, temp, min;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(arr[j] < arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	int arr[m];
	int top[n];
	int i, j;
	for(i=0; i<m; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, m);
	for(i=0; i<n; i++){
		top[i] = arr[m-1-i];
	}
	int current = 0;
	while(current < (m-n)){
		top[0] = top[0] + arr[current];
		current++;
		sort(top, n);
	}
	printf("%d", top[0]);
	return 0;
}

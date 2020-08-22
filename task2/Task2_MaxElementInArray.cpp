#include <stdio.h>

int main(){
	long long int n;
	scanf("%lld", &n);
	long long int i;
	long long int arr[n];
	for(i=0; i<n; i++){
		arr[i] = i+1;
	}
	int q;
	long long int j;
	scanf("%d", &q);
	for(i=0; i<q; i++){
		long long int lower, upper, value;
		scanf("%lld", &lower);
		scanf("%lld", &upper);
		scanf("%lld", &value);
		for(j=lower-1; j<upper; j++){
			arr[j] += value;
		}
	}
	long long int max = arr[0];
	for(i=0; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("%lld", max);
	return 0;
}

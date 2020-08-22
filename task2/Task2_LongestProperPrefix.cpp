#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	int a;
	for(a=0; a<n; a++){
	char str[1000000];
	scanf("%s", str);
	int counter = 0;
	int answer = 0;
	int i = 0;
	for( i =0 ;i < strlen(str); i++){
		if(str[i] == '>'){
			if(counter == 0){
				break;
			}else {
				counter--;
				answer++;
			}
		}else if(str[i] == '<'){
			counter++;
		}
	}
	printf("%d\n", answer*2);
		
	}
	return 0;
}

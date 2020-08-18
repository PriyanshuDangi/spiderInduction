#include <stdio.h>
#include <string.h>

int main(){
	int n , r, x, y;
	scanf("%d %d %d %d", &n, &r, &x, &y);
	int intialrating = r;
	int contest[n];
	int scn[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", contest + i);
	}
	for(i=0; i<n; i++){
		scanf("%d", scn + i);
		if(contest[i]){
			if(scn[i]){
				r = r + x;
			}else{
				r = r - y;
			}
		}
	}
	char output[13];
	if(intialrating < r){
		strcpy(output, "promoted");
	}else if(intialrating == r){
		strcpy(output, "no change");
	}else{
		strcpy(output, "demoted");
	}
	printf("%s", output);
}

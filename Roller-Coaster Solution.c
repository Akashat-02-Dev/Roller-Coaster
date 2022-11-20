#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	int X, H;
	scanf("%d",&X);
	scanf("%d",&H);
	if(X>=H){
	    printf("\nYES");
	}
	else{
	    printf("\nNO");
	}
	}
	return 0;
}


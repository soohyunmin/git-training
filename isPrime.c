#include <stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	for(i = 2; i < n; i ++){
		if(n % i == 0){
			printf("This num is not a prime");
			return 0;
		}
	}
	printf("This num is a prime!");
	return 0;
}
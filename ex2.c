#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
  	printf("Please, enter N - amount of integers:");
	scanf("%d",&n);
	int* arr = malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i){
		arr[i] = i;
	}
	for (int i = 0; i < n; ++i){
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}
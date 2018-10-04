#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* my_realloc(void *ptr, int new_size){
    if (ptr == NULL)
        return malloc(new_size);
    void* new_ptr = malloc(new_size);
    memcpy(new_ptr, ptr, new_size);
    free(ptr);
    return new_ptr;    
}

int main(){
    printf("Enter array1 size: ");
    int n1;
    scanf("%d", &n1);
    int *arr1 = malloc(n1*sizeof(int));
    for (int i = 0; i < n1; i++){
        arr1[i] = i;
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Enter array2 size: ");
    int n2;
    scanf("%d", &n2);
    int *arr2 = my_realloc(arr1, n2*sizeof(int));
    for (int i = 0; i < n2; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}
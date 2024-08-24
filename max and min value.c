#include <stdio.h>

void printArray(int *arr, int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void modifyArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr + i) += 10; // Increase each element by 10
    }
}

int sort(int *arr, int size){
    
    int max = arr[0];
    int min = arr[0];
    
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];// change the value of max with the value of array
        }
        else if(arr[i]<min){
            min = arr[i];//change the value of min with value of array
        }
    }
    printf("\n max value of the array is: %d", max);
    printf("\n min value of the array is: %d", min);
    
    return 0;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal ");
    printArray(arr, size);

    modifyArray(arr, size);

    printf("\nModified ");
    printArray(arr, size);
    
    printf("\nSorted array: ");
    sort(arr,size);
    return 0;
}

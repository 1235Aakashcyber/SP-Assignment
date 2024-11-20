#include <stdio.h>
void displayArray(int *arr, int size);
int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array contents: ");
    displayArray(arr, 5);

    return 0;
}
void displayArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", *(arr + i));
    }
    printf("\n %d",*(arr+1));
}

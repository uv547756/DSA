#include <stdio.h>

void assignArray(int *arr, int size, int twoDArray[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j <= i && j < size) {
                twoDArray[i][j] = arr[j];
            } else {
                twoDArray[i][j] = 0;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int twoDArray[6][6];
    assignArray(arr, size, twoDArray);

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", twoDArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
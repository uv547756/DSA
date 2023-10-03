#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5};
    int i, ind;
    printf("Enter elemt to be deleted.");
    scanf("%d", &ind);
    for(i=ind; i<10; i++){
        arr[i] = arr[i+1];
    }

    for(i=0;i<10; i++){
        printf("%d \n", arr[i]);
 }
 return 0;
}
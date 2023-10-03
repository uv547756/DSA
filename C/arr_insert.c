#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10]={1,2,3,4,5};
    int i, index, el;
    printf("Enter element's index: ");
    scanf("%d", &index);
    printf("Enter elemt: ");
    scanf("%d", &el);


    for(i=10; i>index; i--)   
        arr[i] = arr[i-1];          //right to left
    arr[index] = el; 


    for(i=0;i<10; i++){
        printf("%d \n", arr[i]);
    }
}
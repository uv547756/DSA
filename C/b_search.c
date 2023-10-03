#include <stdio.h>
struct array
{
    int A[10];
    int size;
    int length;
};

int bsearch(struct array arr, int key){
    int l=0, mid, h=arr.length - 1;
    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;  
    }
    return -1;
};
int main(){
    struct array arr = {{1,2,3,4,5,6,7,8,9,10}, 10, 10};
    int x;
    printf("Enter element u want: ");
    scanf("%d", &x);
    int result = bsearch(arr, x);
    if(result != -1)
        printf("Element found at index %d \n", result);
    else
        printf("Result not found");
    return 0;
}
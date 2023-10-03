#include <stdlib.h>
#include <stdio.h>

struct Array{
    int size;
    int length;
    int *p;
};

void Display(struct Array arr){
    int i;
    for(i=0; i<arr.size;i++)  
        printf("%d", arr.p[i]);
}
int main(){
    struct Array arr;
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &arr.size);
    arr.p = (int *)malloc(arr.size*sizeof(int));
    printf("Enter length of array: ");
    scanf("%d",&arr.length);

    printf("Enter all elements: ");
    for(i=0; i<arr.length; i++){
        scanf("%d",&arr.p[i]);
    }
    Display(arr);
    return 0;
}
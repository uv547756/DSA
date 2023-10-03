#include <stdio.h>
int x=0;
void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        printf("from %d to %d \n", A,C);
        TOH(n-1, B, A, C);
    }
}
int main(){
    TOH(2,1,2,3);
    printf("%d",x);
    return 0;
}
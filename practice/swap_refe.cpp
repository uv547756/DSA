#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main(){
    int x = 10, y = 20;
    cout<<&x<<endl;
    swap(&x,&y);

    return 0;
}
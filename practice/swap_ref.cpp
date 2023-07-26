#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a;      //store address of a to temp
    *a = *b;        //store address of b to a
    *b = temp;      //store at b address of a via temp
    cout<<"x: "<<*a<<"y:"<<*b;      //print through ptr as variables have addresses stored
}
int main(){
    int x = 10 , y = 20;
    swap(&x, &y);
    return 0;
}
#include <iostream>
using namespace std;
void swap (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<y;
}
int main(){
    int a = 10, b = 20;
    swap(a,b);
    return 0;
}
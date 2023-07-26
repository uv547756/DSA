#include <iostream>
using namespace std;
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"v1: "<<x<<"v2: "<<y;
}
int main(){
    int a, b;
    cout<<"Enter v1:";
    cin>>a;
    cout<<"Enter v2:";
    cin>>b;
    swap(a,b);
    return 0;
}
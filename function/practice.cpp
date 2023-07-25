
#include <iostream>
using  namespace std;
int add(int a, int b){
    int c;
    c = a+b;
    return c;
}
int main(){
    int num1=0 ,num2=0, c;
    cin >> num1 >> num2;
    c = add(num1,num2);
    cout<<"The sum is: "<<c;
    return 0;
}
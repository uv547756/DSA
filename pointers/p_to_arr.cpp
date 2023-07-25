#include<iostream>
using namespace std;
int main(){
    int A[5]={1,2,3,4,5}; //array is in stack
    int *p;   //ptr pointing to arr
    p=A;
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    return 0;
}
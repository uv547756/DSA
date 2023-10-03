#include <iostream>
using namespace std;
int main(){
    int A[]= {1,2,3,4};
    cout<<sizeof(int)<<endl<<sizeof(A)<<endl;
    cout<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A)
    cout<<x<<" ";
}

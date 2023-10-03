#include <iostream>
using namespace std;
int add(int *a, int *b){
    int c;
    c = *a + *b;
    return c;
}
int main(){
    int x = 10; int y = 20;
    cout<<add(&x,&y);
    return 0;
}
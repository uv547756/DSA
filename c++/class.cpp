#include <iostream>
using namespace std;
class myclass{
public:
    int x;
    int y;
    virtual void init(int a, int b) = 0;
};


class my: public myclass{
public:
    void init(int a, int b){
    x = a;
    y = b;
    }
    void display(){
        cout<<"a="<<x;
        cout<<"b="<<y;
    }
};
int main(){
    my ob1;
    ob1.init(1,2);
    ob1.display();
    return 0;
}
#include <iostream>
using namespace std;
class super_A{
    int x=1;
    int b=2;
};
class parent_A: public super_A{
};

class parent_b: public super_A{
};

class child: public parent_A, parent_b{
    public:
    void display(){
        cout<<x<<""<<b;
    }
};

int main(){
    child C;
    C.display();
    return 0;
}
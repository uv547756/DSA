#include <iostream>
using namespace std;
void Display(int *A, int size){
    int i;
    //for(int x:A){                 //error as an end isn't specified to the array         
    for(i=0; i<size; i++){
        cout<<A[i]<<" ";
    }    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<arr<<" "<<sizeof(arr)/sizeof(int)<<endl;
    Display(arr, 5);        //arr is a reference here and an array can only be in passed this way
    return 0;
}
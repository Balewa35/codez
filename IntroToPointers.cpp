#include<iostream>
using namespace std;
int main(){
    int* pPointers = nullptr;
    int IntegerVar = 5;

    pPointers = &IntegerVar;
    cout<<"The value of the integer is: "<<IntegerVar <<endl;
    cout<<" The address of the integer is : "<< &IntegerVar <<endl;
    cout<<" The address of the assign pointer:"<<pPointers<<endl;
    cout<<"The address of pointer: " << &pPointer<<endl;
    return 0;
}
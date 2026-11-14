#include<iostream>
using namespace std;
int main(){
    int FirstValue;
    int SecondValue;
    int* pPointers = nullptr;

    pPointers = &FirstValue;
    *pPointers = 10;

    pPointers = &SecondValue;
    *pPointers = 20;

    cout<<FirstValue<<endl;
    cout<<SecondValue<<endl;
    return 0;
}
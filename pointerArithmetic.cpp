#include<iostream>
using namespace std;
int main(){
    int* pPointer = nullptr;
    int numberArray[3] = { 10, 20, 30};
    pPointer = numberArray;

    cout<<pPointer<<endl;
    cout<<numberArray<<endl;
    cout<<*pPointer<<endl;
    cout<< *(++pPointer) <<endl;
    pPointer = numberArray;
    cout<<*(pPointer++)<<endl;
    return 0;
}


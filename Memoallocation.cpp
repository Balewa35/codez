#include<iostream>
using namespace std;
int main(){
    int numberofelement=0;
    int*dynamicarray=nullptr;
    cout<<"how many number would you like to type? ";
    cin>>numberofelement;
    dynamicarray=new int[numberofelement];
    if(dynamicarray==nullptr){
        cout<<"error : memory could not be allocated";
    }else{
        for (int i=0;i<numberofelement;i++){
            cout<<"enter number: ";
            cin>>dynamicarray[i];
        }cout<<"u have entered: ";
        for(int j=0;j<numberofelement;j++){
            cout<<dynamicarray[j]<<",";
        }
        delete[]dynamicarray;

    }
    return 0;
}
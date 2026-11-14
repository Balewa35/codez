#include<iostream>
using namespace std;
double square(){
    double side;
    cout<<"Enter the side of the square"<<endl;
    cin>>side;
    return side * side;
}
double rectangle(){
    double length ,width;
    cout<< "Enter the length of the rectangle"<<endl;
    cin>> length;
    cout<< "Enter the width of the rectangle" <<endl;
    cin>> width;
    return length * width;
}
double triangle(){
    double base,height;
    cout<< "Enter the base of the triangle"<<endl;
    cin >>base;
    cout<< "Enter the height of the triangle"<<endl;
    cin>> height;
    return 0.5 * base * height;
}
int main(){
    int choice ;
    double area;
    do{
        cout<<"Please select the area of the figure"<<endl;
        cout<<"1.Square"<<endl;
        cout<<"2.rectangle"<<endl;
        cout<<"3.triangle"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter selection"<<endl;
        cin >>choice;
        switch(choice){
            case 1 : area = square();
            cout<<"Area of the square is"<< area<<endl;
            break;
            case 2 : area = rectangle();
            cout<<"Area of the rectangle is"<< area<<endl;
            break;
            case 3 : area = triangle();
            cout<<"Area of the triangle is"<< area<<endl;
            break;
            case 4 : cout<<"Program terminate"<<endl;
            break;
            default:cout<< "Invalid selection"<<endl;
        }
    }while(choice != 4);
    return 0;
}
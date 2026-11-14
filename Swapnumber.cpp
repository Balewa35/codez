
#include <iostream>
using namespace std;

 
void SwapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int VarA = 10;
    int VarB = 20;

    cout << "VarA before swap is " << VarA << endl;
    cout << "VarB before swap is " << VarB << endl;

    SwapNumbers(VarA, VarB);

    cout << "VarA after swap is " << VarA << endl;
    cout << "VarB after swap is " << VarB << endl;

    return 0;
}

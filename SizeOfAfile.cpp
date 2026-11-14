#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char data[100];
    streampos begin;
    streampos end;
    ifstream myfile("example.bin", ios::binary);
    ofstream outfile;
    outfile("example.bin");
    cout<<"enter ur name: "<<endl;
    cin.getline(data,100);
    outfile<<data<<endl;
    cout<<"where do u come from : "<<endl;
    cin.getline(data,100);
    myfile << data<<endl;

    begin = myfile.tellg();
    myfile.seekg(0,ios::end);
    end= myfile.tellg();
    myfile.close();
    cout<<"size is : "<<(end-begin)<<"bytes.\n";
    return 0;

}
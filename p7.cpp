#include<iostream>
using namespace std;
class complex{
    private:
    int real,img;
    public:
    //same name as class name for constructor and destructor
    //no need parameter
    complex();
    ~complex();
};
//declaration of constuctor
complex::complex(){
    cout<<"enter the real and imaginary numbers"<<endl;
    cin>>real>>img;
    cout<<real<<"+ i"<<img<<endl;
}
complex::~complex(){
    cout<<"execute succesfully"<<endl;
}

int main(){
//no need function call just declare object 
//constructor and destructor will automaticaly get execute
    complex c1;
    return 0;
}
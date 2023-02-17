//program 20
#include<iostream>
using namespace std;
class complex{
int real;
int img;
public:
   friend istream & operator>>(istream & in,complex &c)
        {
        cout<<"Enter the real and imaginary part : ";
        in>>c.real;
        in>>c.img;
        return in;
        }
friend ostream & operator<<(ostream & out,const complex &c)
        {
        cout<<"The real and imaginary part is : ";
        out<<c.real;
        cout<<'+';
        out<<c.img;
        cout<<'i';

        return out;
        }


};
int main(){
        complex c;
        cin>>c;
        cout<<c;
        return 0;

}
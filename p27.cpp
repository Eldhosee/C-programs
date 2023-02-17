// single inheritance
#include<iostream>
using namespace std;

class Vehicle
{
    private:
    int year;
    char name[100];

    public:
 void input_v(){
    cout<<"enter the name:"<<endl;
    cin>>name;
    cout<<"year:"<<endl;
    cin>>year;
 }
 void display_v(){
    cout<<"name:"<<name<<endl;
    cout<<"year:"<<year<<endl;
 }

};

class car:public Vehicle{
    private:
    int power,price;
    public:
    void input(){
    input_v();
    cout<<"enter the power:"<<endl;
    cin>>power;
    cout<<"price:"<<endl;
    cin>>price;
 }
 void display(){
    display_v();
    cout<<"power:"<<power<<endl;
    cout<<"price:"<<price<<endl;
 }

};
int main(){
    car c1;
    c1.input();
    c1.display();
    return 0;
}
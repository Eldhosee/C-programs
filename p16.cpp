//program 15
#include<iostream>
using namespace std;
class area{
    private:
    int a,b,c;
    public:
    void get_data(){
        cout<<"enter the length of wall:"<<endl;
        cin>>a;
        cout<<"enter the breadth of wall:"<<endl;
        cin>>b;
        cout<<"enter the height of wall:"<<endl;
        cin>>c;
    }
    void display(){
        cout<<"the area of wall:"<<a*b*c<<endl;
    }
    area(){}
    area(area&obj){
        a=obj.a;
        b=obj.b;
        c=obj.c;

    }

};
int main(){
    area a1,a2;
    a1.get_data();
    a2=a1;
    a2.display();
    return 0;
}
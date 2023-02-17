//program 14
#include<iostream>
using  namespace std;
class box{
    private :
     int a,b;
     public:
     void get_boxes(){
        cout<<"enter the number of blackboxes"<<endl;
        cin>>a;
        cout<<"enter the number of redboxes"<<endl;
        cin>>b;

     }
     void display(){
        cout<<"no. of blackboxes:"<<a<<endl;
        cout<<"no. of redboxes:"<<b<<endl;

     }
     friend box operator + (box b1,box b2){
        box result;
        result.a=b1.a+b2.a;
        result.b=b1.b+b2.b;
        return result;
     }
};

int main(){
    box b1,b2,b3;
    b1.get_boxes();
    b1.display();
    b2.get_boxes();
    b2.display();
    b3=b1+b2;
    b3.display();
    return 0;

}


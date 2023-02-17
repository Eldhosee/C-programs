#include<iostream>
using namespace std;
class name{ //base class
    
    public:
    char std_name[20];
    void get_name(){
        cout<<"enter the name:"<<endl;
        cin>>std_name;
    }
};

class mark:public name{ //derived class
   
    public:
    float std_mark;
    void get_mark(){
        cout<<"enter the total mark:"<<endl;
        cin>>std_mark;

    }

};

class student:public mark{ //hybrid class
    public:
    void display(){
        cout<<"name:"<<std_name<<endl;
        cout<<"mark:"<<std_mark<<endl;
    }
};

int main(){
    student s1;
    s1.get_name();
    s1.get_mark();
    s1.display();
    return 0;
}
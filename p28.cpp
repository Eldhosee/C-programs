//program24
#include<iostream>
using namespace std;
class int_number
{
    protected:
        int num1,num2;

    public:
    void getint(){
        cout<<"enter 2 interger:"<<endl;
        cin>>num1>>num2;
    }
};
class float_number
{
    protected:
        float num3,num4;

    public:
    void getfloat(){
        cout<<"enter 2 float:"<<endl;
        cin>>num3>>num4;
    }
};
 
class addition:virtual public int_number{
    protected:
    int sum;
    public:
    void add(){
        sum=num1+num2;
    }
};
class substraction:virtual public int_number{
    protected:
    int diff;
    public:
    void sub(){
        diff=num1-num2;
    }
};
class multiplication:virtual public float_number{
    protected:
    float product;
    public:
    void mult(){
        product=num3*num4;
    }
};

class division:virtual public float_number{
    protected:
    float q;
    public:
    void div(){
        q=num3/num4;
    }
};
class arithematic:public addition,public substraction,public multiplication,public division{
    public:
    void display(){
        cout<<"sum"<<sum<<"\ndifference"<<diff<<"\nproduct:"<<product<<"\nquoitent"<<q<<endl;
    }
 };
 int main(){
    arithematic a1;
    a1.getint();
    a1.getfloat();
    a1.add();
    a1.sub();
    a1.mult();
    a1.div();
    a1.display();
    return 0;

 }
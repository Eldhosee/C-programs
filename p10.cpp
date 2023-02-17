#include<iostream>
using namespace std;
class complex{
    private:
    int real,img;
    public:
    friend int add(complex obj1,complex obj2);
};
int add(complex obj1,complex obj2){
    int a,b,c,d,sum1,sum2;
    cout<<"enter 1st complex number  real and img part:"<<endl;
    cin>>a>>b;
    obj1.real=a;
    obj1.img=b;
    cout<<"enter 2nd complex number  real and img part:"<<endl;
    cin>>c>>d;
    obj2.real=c;
    obj2.img=d;
    sum1=obj1.real+obj2.real;
    sum2=obj1.img+obj2.img;
    cout<<"added complex number:"<<sum1<<"+"<<"i"<<sum2;
    return 0;
}
int main(){
    complex cmp1,cmp2;
    add(cmp1,cmp2);
    return 0;
}
//program 22
#include<iostream>
using namespace std;
class employee
    {
        public:
    int empno;
    int payrate;
    int payment;

void getdata1()
    {
    cout<<"\nEnter the employee no : ";
    cin>>empno;
    cout<<"\nEnter the payrate :";
    cin>>payrate;
    }
 void pay(){
    payment=16*4*payrate;
    cout<<"\nSalary is = "<<payment;
    }
void display1(){
  cout<<"\nEmployee no : "<< empno;
}
};
class supervisor : public employee{
 char dept[10];
public:
  void getdata2(){
    getdata1();
    cout<<"\nEnter the department : ";
    cin>>dept;
}
void display2(){
    display1();
    cout<<"\nDepartment : "<<dept;
}
};

class manager: public employee{
public:
 bool is_salaried;
void getdata3()
{
    getdata1();
    cout<<"\npress 1 if salaried and 0 if not salaried : ";
    cin>>is_salaried;
}
void pay()
{
   if(is_salaried==0)
{
    int hr;
    cout<<"\nEnter the no of hours worked :";
    cin>>hr;
    payment=hr*payrate;
    display1();
    cout<<"\nSalary is = "<<payment;
}
else if(is_salaried==1)
    {payment=16*4*payrate;
    display1();
    cout<<"\nSalary is = "<<payment;
}
}
};
int main()
{
    supervisor s;
    manager m;
    cout<<"\n\t\t\tSUPERVISOR\n";

    s.getdata2();
    s.display2();
    s.pay();
    cout<<"\n\t\t\tMANAGER\n";
    m.getdata3();

    m.pay();
    return 0;
}



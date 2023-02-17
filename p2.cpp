#include<iostream>
using namespace std;
class factorial{

public:
    int cal(int number);
};
int factorial::cal(int number){
    int i,a=1;
    for(i=1;i<=number;i++){
        a=a*i;
    }
    return a;

}

int main(){
    factorial f1;
    int number,result;
    cout<<"enter the number"<<endl;
    cin>>number;
    result=f1.cal(number);
    cout<<result;
    return 0;

}
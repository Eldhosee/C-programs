//program 17
#include<iostream>
using namespace std;
class sum{
    private :
    int a;
    public:
    void get_data(){
        cout<<"enter the value of n:"<<endl;
        cin>>a;
    }
    
    sum(){}
    sum(sum&obj1){
        a=obj1.a;
        
        }
        
    int sum_of_n(){
        int result;
        result=(a*a+a)/2;
        return result;

    }
    void display(){
        cout<<"the sum is:"<<sum_of_n()<<endl;
    }
};

int main(){
    sum s1;
    s1.get_data();
    s1.display();
    return 0;
}
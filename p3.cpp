#include<iostream>
using namespace std;
class prime{
    private:
        int number;
    public:
        void prime_number();
};

void prime::prime_number(){
    cout<<"enter number till where to find"<<endl;
    cin>>number;
    if(number<1){
        cout<<"invaild input!"<<endl;
    }
    else{
    
    }
}

int main(){
    prime p1;
    p1.prime_number();
    return 0;
}
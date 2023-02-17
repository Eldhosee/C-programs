#include<iostream>
using namespace std;
class add{
    private:
    int x;
    public:
    void getdata(){
        cout<<"enter the number"<<endl;
        cin>>x;
    }
    // add(){
    //     this->x=x;
       
    // }
    add operator+(add c){
        add temp;
        temp.x=x+c.x;
        
        return temp;
    }
    void display(){
        cout<<"sum:"<<x<<endl;
    }
};

int main(){
    add c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.display();
    return 0;

}

//program 18
#include<iostream>
using namespace std;

class Box{
    private:
    int length,bredth,height;
    public:

    Box(){
        length=2;
        bredth=3;
        height=5;

    }
    Box(int l,int b, int h){
        length=l;
        bredth=b;
        height=h;
    }
    Box(Box&obj){
        length=obj.length;
        bredth=obj.bredth;
        height=obj.height;

    }
    ~Box(){
        cout<<"object destoyed"<<endl;
    }
    void get_data(){
        cout<<"enter the length,bredth,height:"<<endl;
        cin>>length>>bredth>>height;
    }
    void cal(){
        cout<<"volume:"<<length*bredth*height<<endl;

    }
};
int main(){
    Box b1,b3;
    Box b2(1,2,3);
    int choice;
    while(choice!=0){
        cout<<"1.volume using default"<<endl<<"2.volume using parametrised"<<endl<<"3.volume using copy constructor"<<endl;
        cout<<"0.exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                b1.cal();
                break;
            case 2:
                b2.cal();
                break;
            case 3:
                b3.cal();
                break;
            default:
                cout<<"invalid input!"<<endl;
                break;

        }
    }
    return 0;
}

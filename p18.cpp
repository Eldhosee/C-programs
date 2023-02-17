//program 17
#include<iostream>
using namespace std;
class area{
    private:
    int radius,length,bredth;
    public:
    void get_cicle_data(){
        cout<<"enter the radius of circle"<<endl;
        cin>>radius;

    }
    void get_rectangle_data(){
        cout<<"enter the length of rectangle"<<endl;
        cin>>length;
        cout<<"enter the bredth of rectangle"<<endl;
        cin>>bredth;
        
    }
    area(){
        
    }
    area(int radius){
        
       this->radius=radius;
    }
    void rectangle_area(){
        cout<<"area of rectangle "<<length*bredth<<endl;

    }
    void circle_area(){
        cout<<"area of circle "<<3.14*radius*radius<<endl;

    }
 
};

int main(){
    area a1;
    int choice;
    do{
        cout<<"1.rectangle"<<endl<<"2.circle"<<endl<<"0.exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                a1.get_rectangle_data();
                a1.rectangle_area();
                break;
            case 2:
                a1.get_cicle_data();
                a1.circle_area();
                break;
            default:
                cout<<"invalid input!"<<endl;

        }
    }while(choice!=0);
    return 0;
}

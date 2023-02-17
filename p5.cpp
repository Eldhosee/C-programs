#include<iostream>
using namespace std;
int area_shape;
void area(int len,int breadth){
    
    area_shape=len*breadth;
    cout<<"area of rectangle: "<<area_shape<<endl;
}

void area(int radi){
    area_shape=3.14*radi*radi;
    cout<<"area of circle"<<area_shape<<endl;    
}

void area(int base,float height){
    area_shape=0.5*base*height;
    cout<<"area of triangle: "<<area_shape<<endl;   
}

int main(){
    int len,breadth,radi,input;
    float height;
    
    do{
     cout<<"\n0.exit\n1.triangle\n2.rectangle\n3.circle\n";
     cin>>input;
     switch(input){
        case 0:
            break;
        case 1:
            cout<<"enter base and height"<<endl;
            cin>>len>>height;
            area(len,height);
            break;
        case 2:
            cout<<"enter base and height"<<endl;
            cin>>len>>breadth;
            area(len,breadth);
            break;
        case 3:
            cout<<"radius"<<endl;
            cin>>radi;
            area(radi);
            break;
        default:
            cout<<"Invaild input!"<<endl;
    }
    }while(input!=0);
    return 0;

}

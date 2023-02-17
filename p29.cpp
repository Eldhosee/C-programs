//program25
#include<iostream>
#include<math.h>
using namespace std;
class shape{
    protected:
    float side;
    public:
    virtual void area()=0;
    virtual void perimeter()=0;
};
class Triangle:public shape{
    protected:
    float side1,side2,side3;
    public:
    void get_data(){
        cout<<"enter the sides of triangle:"<<endl;
        cin>>side1>>side2>>side3;
    }
    void area(){
        float s=(side1+side2+side3)/2;
        float area=sqrt(s-side1)*(s-side2)*(s-side3);
        cout<<"area of triangle:"<<area<<endl;
            }
    void perimeter(){
        float perimetre;
        perimetre=side1+side2+side3;
        cout<<"perimeter of triangle:"<<perimetre<<endl;
    }
};
class Rectangle:public shape{
    protected:
    float side1,side2;
    public:
    void get_data(){
        cout<<"enter the sides of rectangle:"<<endl;
        cin>>side1>>side2;
    }
    void area(){
        
        float area=side1*side2;
        cout<<"area of Rectangle:"<<area<<endl;
            }
    void perimeter(){
        float perimetre;
        perimetre=2*(side1+side2);
        cout<<"perimeter of Rectangle:"<<perimetre<<endl;
    }
};
class circle:public shape{
    protected:
    float radius;
    public:
    void get_data(){
        cout<<"enter the radius of circle:"<<endl;
        cin>>radius;
    }
    void area(){
        
        float area=3.14*radius*radius;
        cout<<"area of circle:"<<area<<endl;
            }
    void perimeter(){
        float perimetre;
        perimetre=2*3.14*radius;
        cout<<"perimeter of circle:"<<perimetre<<endl;
    }
};
class square:public shape{
    protected:
    float side1;
    public:
    void get_data(){
        cout<<"enter the sides of square:"<<endl;
        cin>>side1;
    }
    void area(){
        
        float area=side1*side1;
        cout<<"area of square:"<<area<<endl;
            }
    void perimeter(){
        float perimetre;
        perimetre=4*side1;
        cout<<"perimeter of square:"<<perimetre<<endl;
    }
};
int main(){
    int choice;
    shape *s;
    Triangle t;
    Rectangle r;
    circle c;
    square sq;
    do{
        cout<<"\n1.Triangle\n2.Rectangle\n3.cicle\n4.square\n0.exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            t.get_data();
            s=&t;
            s->area();
            s->perimeter();
            break;
        case 2:
            r.get_data();
            s=&r;
            s->area();
            s->perimeter();
            break;
        case 3:
            c.get_data();
            s=&c;
            s->area();
            s->perimeter();
            break;
        case 4:
            sq.get_data();
            s=&sq;
            s->area();
            s->perimeter();
            break;        
        
        default:
            break;
        }
    }while (choice!=0);
   return 0;
    
}
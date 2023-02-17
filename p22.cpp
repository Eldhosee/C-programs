//program21
#include<iostream>
using namespace std;

class Vehicle
{
    protected:
    int mileage, price;

    public:
 void input();
 void display();

};

class Car : public Vehicle
{
     private:
       int owner_cost, warranty, seats;
       string fuel_type;
     public:
        void input1();
 void display1();
};

class Bike : public Vehicle
{
   private:
 int cylinder, gear;
 string coll_type, wheel;
 float tank_size;
   public:
 void getData2();
 void display2();
};
void Vehicle :: input()
{
     cout<<"enter the mileage: ";
 cin>>mileage;
 cout<<"enter the price : ";
 cin>>price;
}

void Vehicle :: display()
{
 cout<<"mileage = "<<mileage<<endl;
 cout<<"price = "<<price<<endl;
}

void Car :: input1()
{
 cout<<"enter the ownership cost: ";
 cin>>owner_cost;
 cout<<"enter the warranty : ";
 cin>>warranty;
 cout<<"enter the seats : ";
 cin>>seats;
 cout<<"enter the fuel type : ";
 cin>>fuel_type;
}

void Car :: display1()
{
 cout<<"ownersip cost: "<<owner_cost<<endl;
 cout<<"warranty: "<<warranty<<endl;
 cout<<"seats = "<<seats<<endl;
 cout<<"fuel type = "<<fuel_type<<endl;
 

}

void Bike :: getData2()
{
 cout<<"enter the number of cylinder: ";
 cin>>cylinder;
 cout<<"enter the number of gear: ";
 cin>>gear;
 cout<<"enter the cooling type: ";
 cin>>coll_type;
 cout<<"enter the wheel type: ";
 cin>>wheel;
 cout<<"enter the tank size in inches: ";
 cin>>tank_size;
 
}

void Bike :: display2()
{
 cout<<"number of cylinder: "<<cylinder<<endl;
 cout<<"number of gear: "<<gear<<endl;
 cout<<"cooling type: "<<coll_type<<endl;
 cout<<"wheel type: "<<wheel<<endl;
 cout<<"tank size in inches: "<<tank_size<<endl;
}

int main()
{
    int choice;
    Car c;
    Bike b;
    cout<<"enter the details of vehicle: "<<endl;
    cout<<"1. for Car\n2. for Bike \nenter the choice : ";
    cin>>choice;

   if(choice == 1)
   {
 c.input();
     c.input1();
 cout<<"---------------------------";
 cout<<"\n\t\tdisplaying car details\n";
 cout<<"\n\n\n";
 cout<<"---------------------------"<<endl;
 c.display();
     c.display1();
   }
   else if(choice == 2)
   {
 b.input();
 b.getData2();
 cout<<"---------------------------";
 cout<<"\n\t\tdisplaying bike details\n";
 cout<<"\n\n\n";
 cout<<"---------------------------"<<endl;
 b.display();
 b.display2();
   }
   else
   {
 cout<<"no match found!!!\nenter another choice";
   }
   
    return 0;
}
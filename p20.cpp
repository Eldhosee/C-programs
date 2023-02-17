//program 19
#include<iostream>
using namespace std;
class Distance
{
   int feet,inch;
public: 
    void getdata()
        {  
        cout<<"\nEnter the feet : ";
        cin>>feet;
        cout<<"\nEnter the inch : ";
        cin>>inch;
        }
    Distance operator+(Distance d2)
        {
        Distance d4;
        d4.feet=feet+d2.feet;
        d4.inch=inch+d2.inch;
        return d4;
        }
    int operator<(Distance d2)
        {
        
        if(feet<d2.feet)
        cout<<"\n Largest distance is = "<<d2.feet<<" feet , "<<d2.inch<<" inches";
        else
        cout<<"\n Largest distance is = "<<feet<<" feet , "<<inch<<" inches";
        }
    void display1()
        {
        cout<<"\nSum of distances = "<<feet<<" feet , "<<inch<<" inches";
        }

};
int main()
        {
        Distance d1,d2,d3,d5;
        d1.getdata();
        d2.getdata();
        d3=d1+d2;
        d3.display1();
        int feet1=d1<d2;
        return 0;

 

}
#include<iostream>
using namespace std;
class Distance{
    private:
    int feet,inch;
    public:
    void getdata(){
        cout<<"enter feet :"<<endl;
        cin>>feet;
        cout<<"enter the inche:"<<endl;
        cin>>inch;
    }
    Distance operator +(Distance d){
        Distance temp;
        temp.feet=feet+d.feet;
        temp.inch=inch+d.inch;
        return temp;
    }
    friend Distance operator >(Distance d1,Distance d2){
        Distance temp;
        if(d1.feet>d2.feet){
            cout<<d1.feet<<"feet"<<d1.inch<<"inch is greater"<<endl;
        }
        else{
           cout<<d2.feet<<"feet"<<d2.inch<<"inch is greater"<<endl; 
        }

    }
 
};

int main(){
    Distance d1,d2;
    d1.getdata();
    d2.getdata();
    d1>d2;
    return 0;


}
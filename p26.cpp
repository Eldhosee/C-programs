#include<iostream>
using namespace std;
class Date{
    private:
    int date,month,year;
    public:
    void getdata(){
        cout<<"enter the date ,month and year:"<<endl;
        cin>>date>>month>>year;

    }
    void display(){
        cout<<date<<"-"<<month<<"-"<<year<<endl;
    }
    Date operator --(int){
        Date temp;
        if(date>1){
            temp.date=date--;
            temp.month=month;
            temp.year=year;
            return temp;
        }
        else if(month==1){
            date=30;
            month=12;
            temp.date=date;
            temp.month=month;
            temp.year=year--;
            return temp;
        }
        else {
            date=30;
            temp.date=date;
            temp.month=month--;
            temp.year=year;
            return temp;
        }
        
    }
};
int main(){
    Date d1;
    d1.getdata();
    cout<<"date:"<<endl;
    d1.display();
    d1--;
    cout<<"previous date:"<<endl;
    d1.display();
    return 0;

    
}
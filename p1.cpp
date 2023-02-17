#include<iostream>
using namespace std;
class student{
private:
    int roll_no;
    float mark;
    char name;
public:
    void get_data();
    void display(int number);

};
void student::get_data(){
    cout<<"enter the name";
    cin>>name;
    cout<<"enter the roll number\nenter the mark"<<endl;
    cin>>roll_no>>mark;
}
void student::display(int number){
    
        cout<<"name:"<<name<<"roll_no:"<<roll_no<<"mark:"<<mark;

    }


int main(){
    
    int number;
    cout<<"enter the number of students"<<endl;
    cin>>number;
    student s[number];
    for(int i=0;i<number;i++){
        s[i].get_data();
    }
    for(int i=0;i<number;i++){
        s[i].display(number);
    }
    return 0;

}
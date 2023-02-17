#include<iostream>
#include<string.h>
using namespace std;
class reverse{
    private:
    char string[20];
    char temp;
    int length;
    public:
    void reverse_string(){
        cout<<"enter the string"<<endl;
        cin>>string;
        length=strlen(string);
        for(int i=0;i<=length/2;i++){
            temp=string[i];
            string[i]=string[length-i-1];
            string[length-i-1]=temp;

        }
        cout<<"reversed string\t"<<string;


        
    }
};
int main(){
    reverse s1;

    s1.reverse_string();
}
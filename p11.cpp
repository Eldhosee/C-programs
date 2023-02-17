#include<iostream>
using namespace std;
class search{
    private:
    static int a;
    public:
    static void search_element(int a);
};
void search::search_element(int a){
    int i,b,flag=0,c[a];
    cout<<"enter the element for searching"<<endl;
    cin>>b;
    do{
        flag=0;
        i=0;
        if(c[i]==b){
            cout<<"element found at"<<flag<<endl;
        }
        else
    }while()
}
int main(){
    search s1;
    int length,data;
    cout<<"enter the size of array:"<<endl;
    cin>>length;
    int a[length];
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<length;i++){
        cin>>a[i];
    }
    s1.search_element(length);
    return 0;
}

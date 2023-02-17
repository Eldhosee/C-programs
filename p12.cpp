#include<iostream>
using namespace std;
class find{
    private:
    int a;
    public:
    void input();
    friend void search(find obj1);

};
void find::input(){
    int a=0;
    cout<<"enter the no of elements"<<endl;
    cin>>a;
    int b[a];
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<a;i++){
        cin>>b[i];
    }

}
void search(find obj1){
    int a,b,c;
    cout<<"enter the no of elements"<<endl;
    cin>>obj1.a;
    int b[a];
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<a;i++){
        cin>>obj1.b[i];
    }
    for(int i=0;i<obj1.a;i++){
        for(int j=0;j<obj1.a-1-i;j++){
            if(b[i]<b[j]){
                b=b[i];
                b[i]=b[j];
                b[j]=b;
            }
        }
    }
}
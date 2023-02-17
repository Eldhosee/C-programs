#include<iostream>
using namespace std;
inline int greatest(int a, int b){
    return (a>b?a:b);
}
int main(){
    int a,b,c;
    cout<<"enter 2 numbers"<<endl;
    cin>>a>>b;
    c=greatest(a,b);
    cout<<c<<"\tis the greatest"<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int length(char *str){
    if(*str=='\0'){
        return 0;
    }
    else{
        return(1+length(str+1));
    }
}
int main(){
    int len;
    cout<<"enter the string"<<endl;
    char str[100];
    cin.getline(str,100);
    len=length(str);
    cout<<"length:"<<len<<endl;
    return 0;
}
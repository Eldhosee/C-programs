#include<iostream>  
using namespace std;    
void swap(int *x, int *y) 
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap; 
 cout<<"swap1"<<endl<<"x:"<<x<<endl<<"y:"<<y<<endl; 
}  
int main()   
{    
 int x=0, y; 
 cout<<"enter 2 number :"<<endl;
 cin>>x>>y;   
 swap(&x, &y);  // passing value to function  
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}   
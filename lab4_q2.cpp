#include<iostream>//include library
using namespace std;
//write main function
int main(){         
 float cel,far; //declare variables
 cout<<"Enter temperature in celsius=";
 cin>>cel;        //Input temperature in celsius
 far=(9*cel/5)+32; //Conversion to farhenheit
 cout<<"The temperature in farhenheit="<<far<<endl;//Display temperature in farhenheit
 return 0;
}

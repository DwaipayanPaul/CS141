#include<iostream>//include library
using namespace std;
int main(){         //write main function
 float cel,far; //declare variables
 cout<<"Enter temperature in farhenheit=";
 cin>>far;        //Input temperature in farhenheit
 cel=5*(far-32)/9; //Conversion to celsius
 cout<<"The temperature in celsius="<<cel<<endl;//Display temperature in celsius
return 0;
}

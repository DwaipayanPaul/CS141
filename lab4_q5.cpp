#include<iostream>//include library
using namespace std;
int main(){         //write main function
 float A1,A2,A3; //declare variables
 cout<<"Enter first angle of triangle=";
 cin>>A1;          //Input first angle in a triangle
 cout<<"Enter second angle of triangle=";
 cin>>A2;        //Input second angle in a triangle
 A3=180-(A1+A2); //find third angle of the triangle
 cout<<"The third angle of the triangle="<<A3<<endl;//Display third angle of the triangle
return 0;
}

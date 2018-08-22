#include<iostream>//include library
using namespace std;
//write main function
int main(){
 float cm,m,km;//declare the variables
 cout<<"Enter length in centimetres";
 cin>>cm;        //taking length in centimetres
 m=cm/100;      //converting length in metres
 km=cm/100000; //converting length in kilometres
 cout<<"The length in metres="<<m<<endl;      //display length in metres 
 cout<<"The length in kilometres="<<km<<endl;//display length in kilometres 
 return 0;
}

#include<iostream>//include library
using namespace std;
//write main function
int main(){
 float day,year,week;//declare the variables
 cout<<"Enter time in days=";
 cin>>day;//taking time in days
 year=day/365;//converting time in year
 week=day/7;//converting time in weeks
 cout<<"The time in days="<<day<<endl;//display time in days
 cout<<"The time in years="<<year<<endl;//display time in years
 cout<<"The time in weeks="<<week<<endl;//display time in weeks 
return 0;
}

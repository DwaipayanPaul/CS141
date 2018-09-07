//question 2
//include library
#include<iostream>
using namespace std;
//write main fuction
int main(){
int n;
  cout<<"enter the length of the series=";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
     //checking for 1st or last line
    if(i==1 || i==n){
     for(int j=1;j<=n;j++)
      {
        cout<<"*"; //printing stars
        }
             }
       else
      {
        cout<<"*";//printing other than first or last line
       for(int h=1;h<=n-2;h++)
        cout<<" "; 
          cout<<"*";
         }
   //next line
   cout<<endl;
}
}

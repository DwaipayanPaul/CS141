//question 5
//include library
#include<iostream>
using namespace std;
//write main fuction
int main()
  {
int n;
cout<<"enter the length of the series=";
cin>>n;
 int i;  //initiallising a counter
   for(i=n-1;i>=0;i--)//decreasing spaces
    {
     for(int j=1;j<=i;j++)
        {
          cout<<" ";//printing spaces
         }
     //checking for first or last line
    if(i==0 || i==n-1)
   {
     for(int k=1;k<=n;k++)
      {
      cout<<"*"; //printing stars on first and last line
        }
         }
    else
      {
       cout<<"*";//printing other than first or last line
       for(int h=1;h<=n-2;h++)
        cout<<" "; 
          cout<<"*";
           }
      cout<<endl;//next line
    }
    return 0;
}

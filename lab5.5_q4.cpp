//question 4
//include library
#include<iostream>
using namespace std;
//write main fuction
int main()
  {
int n;
cout<<"enter the length of the series=";
cin>>n;
   for(int i=n;i>=1;i--)    //decreasing spaces
    {
     
      for(int j=1;j<=i;j++)
        {
          cout<<" ";       //printing spaces
         }
     for(int k=1;k<=n;k++)
      {
      cout<<"*";           //printing stars
        }
      cout<<endl;           //next line
   }
   return 0;
}

#include<iostream>
using namespace std;
int main(){
  int t;
  int min;

  int a,b,c;
  cout<<"ENter the number of testcases";
    cin>>t;
  
  while (t--)
  {
    cout<<"Enter the values of a and b";
    cin>>a>>b;
    if (1<=b&& b <= 10)
    {   
         if( 1<=a&& a<=b )

    {
       c=1;
       int min=(c-a)+(b-c);
    }
    
    }
    cout<<min;
    
    
    
  }
  
}

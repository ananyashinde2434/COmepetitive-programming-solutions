#include<iostream>
using namespace std;
void sakurakosExam(int arr[],int N,int a,int b){
    int t,i;
    cin>>t;


    while (t--){

        cin>>a>>b;
        for ( i = 0; i <N; i++)
        {
            if((a%2!=0)&&(b%2!=0)){
        cout<<"No";

      }
      if ((a%2==0)&&(b%2!=0))
      {
        cout<<"Yes";

      }
      if((a%2!=0)&&(b%2==0)){
        cout<<"No";
      }
      if((a%2==0)&&(b%2==0)){
        cout<<"Yes";
      }
      

    }

        }
        
      



}
int main(){
    int arr[100],N,i;
     int a,b;
   cin>>a>>b;
   N=a+b;

  
 
   int count=0;

   for ( i = 0; i < N; i++)
   {
   if (arr[i]==2||arr[i]==1)
   {
    arr[count++]=arr[i];
   }
   
   }
   sakurakosExam(arr,N,a,b);


   
}
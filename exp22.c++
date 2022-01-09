#include <iostream>
# define m 2
using namespace std;
void display(int n,int arr[][10]);
void display (int n,int arr[][10]){
    cout<<"elements stored are\n";
       for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
           if(j==n-1)
           cout<<"\n";
       }
   }
}
int main(){
   int n,arr[10][10];
   cout<<"the row paramater predecided is: "<<m<<endl;
   cout<<"enter the column parameter needed ";
   cin>>n;
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cin>>arr[i][j];
       }
   }
   display(n,arr);
return 0;
}
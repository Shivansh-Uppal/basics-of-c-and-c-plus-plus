#include <iostream>
using namespace std;
void add();
     void sub();
     void mul();
     void trans();
void add(){
    int size;
      int arr1[10][10],arr2[10][10];
      cout<<"enter the size"<<endl;
      cin>>size;
      cout<<"enter elements of array 1: "<<endl;
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          cin>>arr1[i][j];
      }
      }
       cout<<"enter elements of array 2: "<<endl;
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          cin>>arr2[i][j];
      }
      }
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          cout<<arr1[i][j]+arr2[i][j]<<" ";
          if(j==size-1)
               cout<<"\n";
      }
     
}
      }
void sub(){
   int size;
      int arr1[10][10],arr2[10][10];
      cout<<"enter the size"<<endl;
      cin>>size;
      cout<<"enter elements of array 1: "<<endl;
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          cin>>arr1[i][j];
      }
      }
       cout<<"enter elements of array 2: "<<endl;
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          cin>>arr2[i][j];
      }
      }
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          cout<<arr1[i][j]-arr2[i][j]<<" ";
          if(j==size-1)
               cout<<"\n";
      }
     
}
}
void mul(){
    int r,c,r2,c2;
      int arr1[10][10],arr2[10][10],result[50][50];
      cout<<"enter the ROW size for array 1: "<<endl;
      cin>>r;
      cout<<"enter the column size for array 1: "<<endl;
      cin>>c;
      cout<<"enter elements of array 1: "<<endl;
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
          cin>>arr1[i][j];
      }
      }
      cout<<"enter the ROW size for array 2: "<<endl;
      cin>>r2;
      cout<<"enter the column size for array 2: "<<endl;
      cin>>c2;
       cout<<"enter elements of array 2: "<<endl;
      for(int i=0;i<r2;i++){
          for(int j=0;j<c2;j++){
          cin>>arr2[i][j];
      }
      }
      if(c==r2){
      for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c; ++k) {
            result[i][j] += arr1[i][k] * arr2[k][j];
         }
      }
   }
   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c2; ++j) {
          cout<<result[i][j]<<" ";
          if(j==c2-1)
          cout<<"\n";
}
   }
      }
      else{
          cout<<"error";
      }
}
void trans(){
    int size;
      int arr1[10][10],arr2[10][10];
      cout<<"enter the size"<<endl;
      cin>>size;
      cout<<"enter elements of array 1: "<<endl;
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          cin>>arr1[i][j];
      }
      }
       for(int i=0;i<size;i++){
           for(int j=0;j<size;j++){
               arr2[j][i]=arr1[i][j];
           }
       }
      for(int i=0;i<size;i++){
           for(int j=0;j<size;j++){
               cout<<arr2[i][j]<<" ";
               if(j==size-1)
               cout<<"\n";
           }
       }
      
}
int main(){
     int ch;
     
     do{
         cout<<"enter choice\n1.addition\n2.subtraction\n3.multiplication\n4.transpose\n5.exit"<<endl;
        cin>>ch;
        switch(ch){
            case 1: 
            add();
            break;

            case 2: sub();
            break;

            case 3: mul();
            break;

            case 4: trans();
            break;
        }
     }while(ch!=5);
return 0;
}
#include <iostream>
using namespace std;
void display(int,int,int);
void display(int r,int c,int arr[][100]){
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
              cout<<arr[i][j]<<" ";
              if(j==c-1){
                  cout<<"\n";
              }
          }
      }
}
int main(){
    int arr[100][100],r,c;
    cout<<"enter the ROW size for array 1: "<<endl;
      cin>>r;
    cout<<"enter the column size for array 1: "<<endl;
      cin>>c;
    cout<<"enter elements of array 1: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    display(r,c,arr);
return 0;
}
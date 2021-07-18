#include <iostream>
#include<stdio.h>
using namespace std;
int area(int length,int breadth){
return length*breadth;
}
int perimeter(int length,int breadth){
int p;
p=2*(length*breadth);
return p;
}
int main(){
    int length=0,breadth=0;
    printf("enter length and breadth\n");
    cin>>length>>breadth;
    
   
    cout<<"area"<<" "<< area(length,breadth)<<endl<<"perimeter"<<" "<<  perimeter(length,breadth);<<endl;
return 0;
}

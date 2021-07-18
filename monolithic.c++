#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
   int length=0,breadth=0;

   printf("enter length and breadth\n");
   cin>>length>>breadth;

   int area=length*breadth;

   int peri=2*(length+breadth);

   cout<<"area"<<" "<< area<<endl<<"perimeter"<<" "<< peri<<endl;
return 0;
}
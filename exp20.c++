#include <iostream>
using namespace std;
double power(double m,int n=2);
int main(){
     int ch,n;
     double m;
     do{
         cout<<"enter the choice\n1.enter only m\n2.enter both m and n\n3.exit"<<endl;
     cin>>ch;
       switch(ch){
           case 1:
           cout<<"enter value of m: ";
           cin>>m;
           cout<<power(m)<<endl;
           break;

           case 2: 
           cout<<"enter value of m: ";
           cin>>m;
           cout<<"enter value of n: ";
           cin>>n;
           cout<<power(m,n)<<endl;
           break;
       }
     }while(ch!=3);
     
return 0;
}
double power(double m,int n){
    double pow=1;
    for(int i=0;i<n;i++){
      pow=pow*m;
    }
    return pow;
}
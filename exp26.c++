#include <iostream>
using namespace std;
class a{
     private:
     int x;
     static int z;
     
     public:
     a(){
         x=0;
         cout<<"calling constructors"<<endl;
         cout<<z++<<endl;
     }
     ~a(){
         cout<<"calling destructors"<<endl;
         //cout<<this<<endl;
     }



static void fun(){
    cout<<z<<endl;
}
void funny(){
    cout<<z<<endl;
}
};
int a::z=0;
int main(){
      a a1,a2,a3;
      //cout<<endl<<a::z;
      //a1.x=1;
a::fun();
      
return 0;
}
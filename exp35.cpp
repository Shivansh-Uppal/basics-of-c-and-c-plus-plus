#include <iostream>
using namespace std;
class A{
     private: 
     int a;
     public:
     A(){
         a=10;
     }
     friend class B;
     //friend int B::search(B &x); //calling friend function syntax;
};
class B{
      private:
      static int w;
      public:
      void display(A &q){
             cout<<"A::a = "<<q.a;
     
           /*int B::search(B &x){
           cout<<"searching value of w ????????\n";
           cout<<"here's a gift\n";
           cout<<w;
           cout<<endl<<x.a;
           return w;*/
           //calling friend function in same class as of friend is not allowed;
      }
};     

int main(){
       A a1;
       B b1;
      
       b1.display(a1);
return 0;
}
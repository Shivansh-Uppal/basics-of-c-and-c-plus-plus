// function overriding
#include <iostream>
using namespace std;
class base{
     public: 
     void print(){
         cout<<"inside a"<<endl;
     }
};
class derived : public base{
    public: 
     void print(){
         cout<<"inside b"<<endl;
         //base::print();           ---------
                                   //       |
     } //                                   |
};                                     //   | -----------> use any of them all are
int main(){                           //    |              function overriding
      derived d1,d2;                  //    |
      d1.print();                     //    |
      //d2.base::print();                   |
//    base obj=derived();            //     |
//    obj.print();                  ---------
return 0;
}
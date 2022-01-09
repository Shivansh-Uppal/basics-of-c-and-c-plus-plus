#include <iostream>
using namespace std;
class complex{
      float real,img;
      public:
        complex(float r=0 , float i=0 )
        {
            real = r;  
            img = i;
        }
      
    complex operator + (complex const obj) {
        complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    void print() 
    {
        cout << real<< " + i" << img<< endl;     
    }
};
int main(){
        complex c1(3.41,40),c2(40,6.78);
        complex c3=c1+c2;
        c3.print();
return 0;
}
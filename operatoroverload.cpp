#include <iostream>
using namespace std;
class complex{
    public:
    int feet;
    complex(){
        feet=0;
        cout<<"under 1 "<<feet<<endl;
    }
    
    complex(int x){
           feet=x;
           cout<<"under 1 "<<feet<<endl;  
    }
    
        void operator -(complex &d4){
        complex e;
        e.feet=-d4.feet;
        cout<<"under 2 "<<e.feet<<endl;
     }
     friend complex operator+(complex &,complex &);
};
complex operator +(complex &d5,complex &d6){
    complex d9;
    d9.feet=+d5.feet;
    cout<<"under 3 "<<d9.feet;
    return d9;
}
int main(){
     complex obj(3),cl(10),hel;
     obj-cl;   
     cl+obj;         
             
return 0;
}
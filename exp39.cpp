#include <iostream>
using namespace std;
class stud{
    int x=1;
    void fun(int y){
        cout<<"value of x: "<<x<<endl<<"value of y: "<<y<<endl;
    };
    public:
    int z=500;
    void disp(int y){
       fun(y);
    }
};
class stad:private stud {
       int y=800;
       public:
       void display(){
           cout<<z+y<<endl;
           //fun(); not accessible
           //cout<<x; not accessible
           //cout<<stud::x;  not acessible
           disp(4);
       }
};
int main(){
     class stad r;
     r.display();
     class stud s;
     //s.fun();  not accessible
return 0;
}
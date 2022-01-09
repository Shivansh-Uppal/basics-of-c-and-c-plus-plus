#include <iostream>
using namespace std;
class stud{
    int x;
    public:
    int z=500;
    protected: 
    int w=600;
};
class stad:protected stud {
       int y=800;
       public:
       void display(){
           cout<<z+y+w;
           //cout<<x+y+z+w  not acessible 
       }
};
int main(){
       class stad e;
       e.display();
return 0;
}
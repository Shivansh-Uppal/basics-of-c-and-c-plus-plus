#include <iostream>
using namespace std;
class stud{
    int x=3;
    public:
    int z=500;
};
class stad:public stud {
       int y=800;
       public:
       void display(){
           cout<<z+y;
           // cout<<x; not accessible
       }
};
int main(){
     class stad s;
     s.display();
return 0;
}
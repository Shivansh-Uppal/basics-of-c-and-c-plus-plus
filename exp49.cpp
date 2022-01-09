#include <iostream>
using namespace std;

class base{
    public:
    void display(){
        cout<<"\n display base";
    }
    virtual void show(){
        cout<<"\n show base";
    }
};

class derived: public base{
      public:
      void display(){
          cout<<"\n display derived";
      }
      void show(){
          cout<<"\n show derived";
      }
};

int main(){
     base b;
     derived d;
     base *obj;

     cout<<"\n obj points to base";
     obj=&b;
     obj->display();
     obj->show();

     cout<<"\n\n obj points to derived";
     obj=&d;
     obj->display();
     obj->show();
return 0;
}
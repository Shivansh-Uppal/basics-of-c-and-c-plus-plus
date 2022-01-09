#include <iostream>
using namespace std;
//multilevel
class a{
    private:
    int x;
    int y;
    int w;
    public:
    a(){
        x=10;
        y=2;
        w=3;
    }
    void display(){
        cout<<"inside a"<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<w<<endl;
    }
};
class b:public a{
      public:
      b(){
          cout<<"inside b"<<endl;
          
      }
      void display2(){
          cout<<"inside b..."<<endl;
           display();
      }
};
class c:public b{
      public:
      c(){
          cout<<"inside c"<<endl;
          
      }
      void display3(){
          cout<<"inisde c..."<<endl;
          display2();
      }
};

int main(){
      class c c2;
      c2.display3();
return 0;
}
#include <iostream>
using namespace std;

class a{
     public: 
     a(){
         cout<<"inside a\n";
     }
     a(int c){
         cout<<c<<endl;
     }
     void set(){
        cout<<"i am out";
     }
};
class b: public a{
    public:
    b():a(){
        cout<<"inside b\n";
    }
    b(int d):a(d){
        cout<<d+50<<endl;
    }

};
/*class c: public b{
    public:
    c():b(){
        cout<<"inside c\n";
    }
    c(int e):b(e){
        cout<<e+100<<endl;
    }
};*/
class d:private a,b{
    public:
       d():a(){
           cout<<"inside d";
       }
};

int main(){
    a a1,a2(5);
    b b1,b2(50);
    //c c1,c2(50);
    cout<<"class b\n";
    b(b);
    //cout<<"class c\n";
    //c(c);
    
return 0;
}
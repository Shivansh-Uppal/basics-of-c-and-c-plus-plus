#include <iostream>
using namespace std;
void fun(int);
void fun1(int);
void fun(int c){
    c=10;
    cout<<"during call by value "<<c<<endl;
}
void fun1(int *c){
    *c=10;
    cout<<"during call by reference "<<*c<<endl;
}
int main(){
    int c;
    cin>>c;
      fun(c);
      cout<<"after call by value "<<c<<endl;
      fun1(&c);
      cout<<"after call by ref "<<c<<endl;
return 0;
}
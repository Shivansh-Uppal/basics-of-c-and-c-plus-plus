#include <iostream>
using namespace std;
class a{
    protected:
    int x;
    public:
    a(){
        x=0;
    }
    a(int c){
        x=c;
    }
    int get(){
       
        return x;
    }
};
class b: public a{
       public:
       void input(){
           cin>>x;
       }
      void fact(){
          int fact=1;
          for(int i=1;i<=x;i++){
              fact=fact*i;
              
          }
          cout<<fact<<" ";
      }
};
int main(){
        a a1;
        b b1;
        int c,d;
        c=a1.get();
        d=b1.get();
        b1.input();
        b1.fact();
return 0;
}
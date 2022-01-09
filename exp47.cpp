#include <iostream>
using namespace std;
class a{
    private:
    int x=11;
    public: 
     void print(){
         cout<<"inside a"<<endl;
     }
    class b{
        public:
        void data(a *n){
            cout<<n->x;
        } 
    };
};
int main(){
    class a obj,*obj2;
     class a::b obj1;
     obj.print();
     obj1.data(obj2);
return 0;
}
#include <iostream>
using namespace std;
class count{
    private:
    static int cal;
    public:
    void c(){
             cal++;
    }
    void disp(){
        cout<<cal;
    }
};
int count::cal=0;
int main(){
       count p;
       int ch;
       do{
        cout<<"\nenter the choice\n1.add passengers\n2.displaying passengers\n3.exit"<<endl;
        cin>>ch;
        switch(ch){
            case 1: cout<<"passengers adding.....";
                   p.c();
                   cout<<"\nadded";
            break;
            case 2: cout<<"total passengers are: ";
                   p.disp();
                   break;
        }
       }while(ch!=3);
return 0;
}
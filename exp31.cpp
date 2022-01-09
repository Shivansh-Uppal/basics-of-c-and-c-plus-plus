/*#include <iostream>
using namespace std;
class aclass{
    private:
    int alpha;
    public:
    void nonfunc(int &alpha){
        alpha=99;
        concfunc(alpha);
    }
    void concfunc(const int &alpha){
        cout<<" "<<alpha;
    }
};
int main(){
     aclass t1,t2;
     int b=0;
     t1.nonfunc(b);
     t2.concfunc(b);
return 0;
}
*/
#include <iostream>
using namespace std;
class distance1{
     private: 
     int feet;
     float inches;
      public:
      distance1(int ft,float inc){
            feet=ft;
            inches=inc;
            cout<<feet;
      }
      void getdist(){
          cout<<feet;
          cin>>feet;
          cout<<inches;
          cin>>inches;
      }
      void showdist(){
          cout<<feet<<"'\n-"<<inches<<"'\n";
      }


      
};
int main(){
      distance1 football(300,0);
    cout<<"football= ";
    football.showdist();
    cout<<endl;
    return 0;
}
#include <iostream>
using namespace std;
class shape{
    public:
    double x,y;
    void get_data(){
        cout<<"Enter length and breadth(or height in case of triangle): ";
        cin>>x>>y;
    }
    virtual void display_area(){};
};

class triangle: virtual public shape{
   public:
   void display_area(){
         cout<<"area of triangle is: "<<(x*y)/2<<endl;
   }
};

class rectangle: virtual public shape{
   public:
   double area;
   void display_area(){
         area=x*y;
         cout<<"area of rectangle is: "<<area<<endl;
   }
};

int main(){
    int ch;
    shape *sptr;
    do{
        printf("enter the area of figure you want:\n1.triangle \n2.rectangle\n3.exit\n");
        cin>>ch;
        switch(ch){
            case 1:
            {
                triangle t;
                t.get_data();
                sptr=&t;
                sptr->display_area();
            }
            break;

            case 2:
            {
                rectangle r;
                r.get_data();
                sptr=&r;
                sptr->display_area();
            }
            break;
            
            case 3:
            exit(0);

            default:
                cout<<"enter correct choice\n";
                break;
            
        }
    }while ((ch!=3));
    
return 0;
}
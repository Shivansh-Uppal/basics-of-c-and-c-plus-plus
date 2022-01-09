#include <iostream>
#include<limits>
#include<strings.h>
using namespace std;
class media
{
    public:
    char title[100];
    char publication[100];
  
    virtual void read()=0;
    virtual void show()=0;
};
class books: public media
{
    int pge_num;
    public:
    void read()
    {
        cout<<"~~~ENTER BOOK DETAILS~~~"<<endl;
        cout<<"Title"<<endl;
        cin.getline(title,100,'\n');
        cout<<"Publication"<<endl;
        cin.getline(publication,100,'\n');
        cout<<"No. of pages are"<<endl;
        cin>>pge_num;
    }
    void show()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Publication: "<<publication<<endl;
        cout<<"No. of pages are: "<<pge_num<<endl;
    }
    
 };
class tape:public media
        {
            int playing_time;
            public:
            void read()
    {
        cout<<"~~~ENTER VIDEO TAPE DETAILS~~~"<<endl;
        cout<<"Title: "<<endl;
        cin.getline(title,100,'\n');
        cout<<"Publication: "<<endl;
        cin.getline(publication,100,'\n');
        cout<<"Playing time: "<<endl;
        cin>>playing_time;
    }
            
            void show()
            {
              cout<<"Title: "<<title<<endl;  
              cout<<"Publication: "<<publication<<endl;
              cout<<"Playing time: "<<playing_time<<" minutes"<<endl;
            }
        };
int main()
{
    int ch;
    do{
        cout<<"\n\n******************MENU**********************"<<endl;
        cout<<"1.BOOKS\n2.VIDEO TAPES\n3.EXIT\n";
         cin>>ch;
         cin.ignore(numeric_limits<streamsize>::max(),'\n');
         if(ch>0 || ch<3){

         
         switch(ch){
            case 1:
            {
                 media *obj= new books;
                 obj->read();
                 obj->show();
            }
               break;
            case 2:
            { 
                 media *obj1=new tape;
                 obj1->read();
                 obj1->show();
            }
            break;
         }
         }   
    }while (ch!=3);
    return 0;
}
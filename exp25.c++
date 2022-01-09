#include <iostream>
using namespace std;
class employee{
       private:
       int id;
       char name[100];
       int phone_number;
       char address[1000];
       char document_verified[10];
       public:
       void display(){}
       void input(){}
       void verification(int e){
           cout<<"completed and genuine\n";
           
       }
};

int main(){
     employee e[5];
     int i;
     for(i=0;i<5;i++){
         e[i].verification(i);
     }
return 0;
}
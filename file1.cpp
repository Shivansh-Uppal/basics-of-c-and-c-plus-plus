#include <iostream>
#include<fstream>
using namespace std;
int main(){

   ofstream obj;
   obj.open("text.txt");
   for(int i=0;i<10;i++){
       obj<<i<<"\n";
   }
   obj.close();
   
return 0;
}
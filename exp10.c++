#include <iostream>
using namespace std;
 void sum(int ,int);
void sum(int, int,int);
void sum(char , char);
void sum(float , float); //this is compiler dependent it might work or not work
int main(){
   sum(1,2);
   sum(1,2,3);
   sum('a','b');
   //sum(3.2,4.5);
return 0;
}
void sum(int a, int b){
    cout<<a+b<<endl;
}
void sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}
void sum(char x,char y){
    cout<<x+y<<endl;
}
void sum(float x,float y){
    cout<<x+y<<endl;
}
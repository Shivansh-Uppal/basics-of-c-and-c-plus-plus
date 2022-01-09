#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;
static int z,w,c,h;
class time{
     private: 
      int x,x1;
      int y,y1;
     
     public:
     void city1(){
          
         cout<<"enter hours: "<<endl;
         cin>>x;
         cout<<"enter minutes: "<<endl;
         cin>>y;
         
         
     }
    void city2(){
         cout<<"enter hours: "<<endl;
         cin>>x1;
         cout<<"enter minutes: "<<endl;
         cin>>y1; 
         
     }
int diff(time t1,time t2){

if(t1.x<=t2.x1 && t1.y<=t2.y1){
         c=t2.y1-t1.y;
         z=t1.x+24;
         cout<<"diffrence in hours: "<<z-t2.x1<<endl;
         cout<<"diffrence in minutes: "<<c<<endl;
}
if(t1.x<=t2.x1 && t1.y>=t2.y1){
         c=t1.y-t2.y1;
         z=t1.x+24;
         cout<<"diffrence in hours: "<<z-t2.x1<<endl;
         cout<<"diffrence in minutes: "<<c<<endl;
}
if(t1.x>t2.x1 && t1.y<t2.y1){
         c=t2.y1-t1.y;
         z= z=t2.x1+24;
         cout<<"diffrence in hours: "<<z-t1.x<<endl;
         cout<<"diffrence in minutes: "<<c<<endl;
}
if(t1.x>t2.x1 && t1.y>t2.y1){
         c=t1.y-t2.y1;
         z= z=t2.x1+24;
         cout<<"diffrence in hours: "<<z-t1.x<<endl;
         cout<<"diffrence in minutes: "<<c<<endl;
}
       return 0;
     }
     void city3_city1(time t1){
          cout<<"time of city3 is ahead of city1 by 4hr 30 min"<<endl;
          if(t1.x<=20 && t1.y<30){
          t1.x+=4;
          t1.y+=30;
          cout<<"hours: "<<t1.x<<endl;
          cout<<"minutes: "<<t1.y<<endl;
          }
          else if(t1.x<20 && t1.y>=30){
          t1.x+=4;
          t1.y+=30;
          cout<<"hours: "<<t1.x+(t1.y/60)<<endl;
          cout<<"minutes: "<<t1.y-60<<endl;
          }
          if(t1.x>=20 && t1.y<30){
          t1.x+=4;
          t1.y+=30;
          cout<<"hours: "<<t1.x-24<<endl;
          cout<<"minutes: "<<t1.y<<endl;
          }
          else if(t1.x>20 && t1.y>=30){
          t1.x+=4;
          t1.y+=30;
          cout<<"hours: "<<t1.x-24+(t1.y/60)<<endl;
          cout<<"minutes: "<<t1.y-60<<endl;
          }
     }
     void city3_city2(time t2){
          cout<<"time of city3 is behind of city2 by 4hr 30 min"<<endl;
          if(t2.x1>=4 && t2.y1>29){
          t2.x1-=4;
          t2.y1-=30;
          cout<<"hours: "<<t2.x1<<endl;
          cout<<"minutes: "<<t2.y1<<endl;
          }
          else if(t2.x1>4 && t2.y1<=29){
          t2.x1-=4;
          t2.y1-=30;
          
          cout<<"hours: "<<t2.x1-1<<endl;

          cout<<"minutes: "<<t2.y1+60<<endl;
          } 
          if(t2.x1<=4 && t2.y1>29){
          t2.x1-=4;
          t2.y1-=30;
          if(t2.x1==4)
          cout<<"hours: "<<t2.x1<<endl;
          else
          cout<<"hours: "<<t2.x1+24-1<<endl;

          cout<<"minutes: "<<t2.y1<<endl;
          }
          else if(t2.x1<4 && t2.y1<=29){
          t2.x1-=4;
          t2.y1-=30;
          cout<<"hours: "<<t2.x1+24-1<<endl;
          cout<<"minutes: "<<t2.y1+60<<endl;
          }
         
     }


};
int main(){
        time t1,t2,t;
       char ch,ch1;
       int i=0;
       do{
            if(i>0){
                   cout<<"want to repeat y/n: "<<endl;
                   cin>>ch1;
            }
            i++;
            if(ch1=='n')
            return 0;


           cout<<"enter time of city1: "<<endl;
          t1.city1();

       cout<<"want to change to city1 time to city3 time y/n: "; 
         cin>>ch;
         if(ch=='y'){
              t.city3_city1(t1);
         }
        
        
        cout<<"enter time of city2: "<<endl;
        t2.city2();

        cout<<"want to change to city2 time to city3 time y/n: "; 
         cin>>ch;
         if(ch=='y'){
              t.city3_city2(t2);
         }
        
        cout<<"want to know time diffrence y/n: ";
        cin>>ch;
        if(ch=='y')
        t.diff(t1,t2);
       
       }while(ch1!='n');
        
        

        
return 0;
}
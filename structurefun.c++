#include <iostream>
#include<stdio.h>
using namespace std;

      struct rectangle{
          int length;
          int breadth;
      };

void initilize(struct rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r1){
    return r1.length*r1.breadth;
}
void changelength(struct rectangle *r, int l){
    r->length=l;
}
int main(){
    rectangle r;
    initilize(&r,10,5);
    area(r);
    changelength(&r,20);
    printf("%d",area(r));
return 0;
}
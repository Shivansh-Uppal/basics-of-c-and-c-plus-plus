#include <iostream>
using namespace std;
 
class Number
{
    protected:
        int num;
    public:
        void getNumber(void)
        {
            cout << "Enter an integer number: ";
            cin  >> num;
        }
        
        void returnNumber(){ 
            cout<<num; 
            }
};
 
class Square:public Number
{
    public:
    void getSquare(void)
    {
        int sqr;
        sqr=num*num;
        cout<<sqr<<endl;
    }
};
 

class Cube:public Number
{      
    public:
    void getCube(void)
    {
        int cub; 
        cub=num*num*num;
        cout<<cub<<endl;
    }
};
int main()
{
        Square square;
        Cube cube;
        square.getNumber();
        square.getSquare();
        cube.getNumber();
        cube.getCube();
        return 0;
}
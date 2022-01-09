#include <iostream>
using namespace std;
 
struct Date {
    int d, m, y;
};

 int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int LeapYears(Date d)
{
    int years = d.y;

    if (d.m <= 2)
        years--;

    return years / 4 - years / 100 + years / 400;
}
 
int Diff(Date dt1, Date dt2)
{
   
   int n1 = dt1.y*365 + dt1.d;
 
    for (int i = 0; i < dt1.m - 1; i++)
        n1 += monthDays[i];
 
    n1 += LeapYears(dt1);

    int n2 = dt2.y*365 + dt2.d;
    for (int i = 0; i < dt2.m - 1; i++)
        n2 += monthDays[i];
    n2 += LeapYears(dt2);

    return (n2 - n1);
}
int main()
{
    Date date1 = {12,12,1999};
    Date date2 = {10,9,2021};
 
    cout << "Difference " << Diff(date1, date2)<<endl;
    cout<<"Difference between two months is " <<  12*(date2.y-date1.y)-(date1.m-date2.m+1)<<endl;
    cout<<"diffrence of years "<<(date2.y-date1.y-1)<<endl;
    return 0;
}
#include <iostream>
#include<math.h>
using namespace std;

int num = 0;
int x;
string m;
int day;

string monthCalc(int a)
{
    string s;
     switch(a)
    {
        case(1):
        s = "March";
        break;

        case(2):
        s = "April";
        break;

        case(3):
        s = "May";
        break;

        case(4):
        s = "June";
        break;

        case(5):
        s = "July";
        break;

        case(6):
        s = "August";
        break;

        case(7):
        s = "September";
        break;

        case(8):
        s = "October";
        break;

        case(9):
        s = "November";
        break;

        case(10):
        s = "December";
        break; 
    }
    return s;
}
int main()
{

cout << "enter the day(number between 1 and 365): ";

cin >> num;
cout << endl;
x = num;
//base case January
if (x <= 31)
{
    cout << "The date is January " << x << endl;
}
//base case February
else if(x < 60 && x > 31)
{
    x = (x-31);
    cout << "The date is February " << x << endl;
}

//else the date is between March and July. ie days 61 through 212
else //if(x >= 60 && x <= 212)
{
    int start = 60;
    for(int i = 1; i < 11; i++)
    {
        if(i < 6)
        {   
            if(i % 2 == 0)//month is even
            {
                if ((x >= start) && (x <= (start + 29)))
                {
                    day = (x - start) + 1;
                    m = monthCalc(i);
                   // cout << "month is " << m << endl;
                    //3cout << "start1 is " << start << endl;
                    start =  start + 30;
                }
                else
                {
                    start =  start + 30;
                }
                
            }
            else//month is odd
            {
                if ((x >= start) && (x <= (start + 30)))
                {
                    day = (x - start) + 1;
                    m = monthCalc(i);
                      // cout << "month is " << m << endl;
                            //cout << "start2 is " << start << endl;
                            start =  start + 31;
                }
                else
                {
                    start =  start + 31;
                }
            }
            
        }
        else//months August to December;even month =31 days, odd = 30
        {
            if(i % 2 == 0)//month is even
            {
                if ((x >= start) && (x <= (start + 30)))
                {
                    day = (x - start) + 1;
                    m = monthCalc(i);
                       //cout << "month is " << m << endl;
                           //cout << "start3 is " << start << endl;
                           start =  start + 31;
                }
                 else
                {
                    start =  start + 31;
                }
            }
            else//month is odd
            {
                if ((x >= start) && (x <= (start + 29)))
                {
                    day = (x - start) + 1;
                    m = monthCalc(i);
                       //cout << "month is " << m << endl;
                            //cout << "start4 is " << start << endl;
                            start =  start + 30;
                }
                else
                {
                    start =  start + 30;
                }
            }
            
        }
    }
  
   cout << endl << "The date is " << m << " " << day << endl;
}

    return 0;
}
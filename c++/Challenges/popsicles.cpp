#include<iostream>
#include<string>
#include<math.h>

/*Popsicles +10 XP

You have a box of popsicles and you want to give them all away to a group of brothers and sisters. If you have enough left in the box to give them each an even amount you should go for it! If not, they will fight over them, and you should eat them yourself later.

Task
Given the number of siblings that you are giving popsicles to, determine if you can give them each an even amount or if you shouldn't mention the popsicles at all.

Input Format
Two integer values, the first one represents the number of siblings, and the second one represents the number of popsicles that you have left in the box.

Output Format
A string that says 'give away' if you are giving them away, or 'eat them yourself' if you will be eating them yourself.

Sample Input
3 9

Sample Output
give away
*/
using namespace std;



int main()
{
    int siblings;
    int popsicles;

    
 
    cout << "How many siblings? must be greater than 1: ";
     
    cin >> siblings;
    cout << endl;
        
    cout << "How many popsicles? ";
    
    cin >> popsicles;
    cout << endl;

    //if one or less popsicle, then "I eat them myself"
    if(popsicles <= 1)
    {
        cout << endl <<"Eat them myself" << endl;
        return 0;
    }

    //too many popsicles to share evenly, so I eat them myself
    if(popsicles < siblings)
    {
        cout << endl <<"Eat them myself" << endl;
        return 0;
    }

    //if siblings mod popsicles has no remainder, then
    //there are an even number of popsicles to share
    if((popsicles%siblings) == 0)
    {
        cout << endl << "give away!!!" << endl;
    }
    else
    {
        cout << endl <<"Eat them myself" << endl;
    }
    
    



        



        
    
    return 0;
}

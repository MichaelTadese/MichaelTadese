#include <iostream>
using namespace std;
/*
 Input:Input a real number
 Output: "x in (-3,_2)" or "x in [-1,4]" or "x out of intervals"
 */
int main()
{
    int nr;
    cout << " Input a real number: ";
    cin >> nr;
    cout << endl << endl << endl << endl << endl;
    if ((nr > -3)&&(nr<-2))
        cout << "x is in (-3,-2)" << endl ;
    else
        if ((nr >= -1)&&(nr<=4))
            cout << "x is in [-1,4]" << endl ;
        else
            cout << "x is out of the interval" << endl ;
    
    cout << endl << endl << endl << endl << endl;
}


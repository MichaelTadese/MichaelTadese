#include <iostream>
using namespace std;

int main()
{
    cout << "_____\t\t__________" << endl;
    cout << "Miles\t\tKilometers" << endl;
    cout << "-----\t\t----------" << endl;
    double mile=1;
    
    for (int i=1; i<=10; mile++, i++)
    {
    cout << mile<< "\t\t\t" << mile*1.609 <<  endl;
    }
    cout << "-------------------" << endl;
}

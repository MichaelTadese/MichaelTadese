#include <iostream>
using namespace std;

int main ()
{
    char answer;
    
    cout << " Input your classification:";
    cin >> answer;
    
    if ( toupper(answer) == 'F')
    {
    cout << "**********Freshman**********" << endl;
}
    else
{
        cout << "~~~~~~~~~~No Freshman~~~~~~~~~~" << endl;
}
}

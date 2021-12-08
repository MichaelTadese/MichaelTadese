#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nr1, nr2;
    bool Valentine;
    string nameUser, nameDate;
    float real;
    char answer;
    
    cout << " Input two integer numbers:";
    cin >> nr1 >> nr2;
    cout << nr1 << " + " << nr2 <<" = "<<nr1 + nr2;
    cout << "\nDo you have a date? (Y/N): ";
    cin >> answer;
    if ( answer == 'Y')
        Valentine = true;
    else
        Valentine = false;
    if (Valentine)
        cout << "Happy you!" << endl;
    else
        cout << "Happy Valentine anyways!" << endl;
}

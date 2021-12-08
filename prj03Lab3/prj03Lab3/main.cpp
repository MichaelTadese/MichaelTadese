#include <iostream>
#include <string>
using namespace std;
/*
 Input: A character
 Output: Depending on the input, a message showing user's status (minor, adult, senior or error)
 */
int main()
{
    char letter;
    string M, A, S;
    
    cout << "Input a letter:";
    cin >> letter;
    if (toupper(letter) == 'M')
        cout << "Status: Minor" << endl;
    else
        if (toupper(letter) == 'A')
            cout << "Status: Adult" << endl;
        else
            if (toupper(letter) == 'S')
                cout << "Status: Senior" << endl;
            else
                cout << "Status: Error" << endl;
}


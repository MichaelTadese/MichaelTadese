#include <iostream>
using namespace std;
/*
 Author: Michael Tadese
 Input: Input your choice (1 - airfare, 2 - hotel, 3 - package, or 0 to exit):
 Output: Depending on the input, a message showing 0 - Exit program 1 - Choose among our partner carriers 2 - Choose among our partner hotel chains 3 - Contact your agent in person, For anything else "Error" with switch.
 */
int main()
{
    int choice;
      cout << "Welcome to your E-Travel Agent!" << endl;
      cout << "Input your choice (1 - airfare, 2 - hotel, 3 - package, or 0):";
      cin >> choice;
    while (choice != 0)
    {
    switch (choice)
    {
        case 1: cout << "Choose among our partner carriers" << endl;
            cout << "Enjoy!" << endl <<endl;
            break;
        case 2: cout << "Choose among our partner hotel chains" << endl;
            cout << "Enjoy!" << endl <<endl;
            break;
        case 3: cout << "Contact your agent in person" << endl;
            cout << "Enjoy!" << endl <<endl;
            break;
        default: cout << "Error" << endl <<endl;
    }
        cout << "Welcome to your E-Travel Agent!" << endl;
        cout << "Input your choice (1 - airfare, 2 - hotel, 3 - package, or 0):";
        cin >> choice;
}
    cout << "The program has ended!" << endl <<endl;
    return 0;
}




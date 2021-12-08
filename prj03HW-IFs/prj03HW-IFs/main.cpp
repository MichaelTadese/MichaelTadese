#include <iostream>
#include <string>
using namespace std;
/*
 Author: Michael Tadese
 Input: Input your classification as a number (1-4)
 Output: Depending on the input, a message showing user's classification in a college(freshman, sophmore, Junior, Senior)
 */
int main()
{
    int number;
    
    cout << "Input your classification as a number (1-4):";
    cin >> number;
    if (number == 1)
        cout << "You are a Freshman" << endl;
    else
        if (number == 2)
            cout << "You are a Sophmore" << endl;
        else
            if (number == 3)
                cout << "You are a Junior" << endl;
            else
                if (number == 4)
                    cout << "You are a Senior" << endl;
                else
                      cout << "Error in input" << endl;
}



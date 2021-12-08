#include <iostream>
#include <string>
using namespace std;
/*
 Author: Michael Tadese
 Input: Input your classification as a number (1-4)
 Output: Depending on the input, a message showing user's classification in a college(freshman, sophmore, Junior, Senior) with switch
 */
int main()
{
    int number;
    
    cout << "Input your classification as a number (1-4):";
    cin >> number;
    switch (number){
        case 1: cout << "You are a Freshman" << endl;
                break;
        case 2: cout << "You are a Sophmore" << endl;
            break;
        case 3: cout << "You are a Junior" << endl;
            break;
        case 4: cout << "You are a Senior" << endl;
            break;
        default: cout << "Error in input" << endl;
    }
    }
    
    
    
    
  

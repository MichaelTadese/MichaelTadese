#include <iostream>
using namespace std;
/*
 This is my attempt
 Input: choices of toppings
 Output: a corresponding message or
 error if the letter was not among A, B, C, D, F
 "while" loop is being used
 */
int main()
{
    char choice;
    float totalCost=7;
    cout << "\t\t WHILE LOOP \n\n";
    cout << "Hello! Welcome to Pizza Napolitana!" << endl << endl;
    cout << "Select your choices:" << endl << endl;
    cout << "a - anchovies  $.90 "<< endl;
    cout << "b - bacon  $.75" << endl;
    cout << "c - cheeses mix $1" <<endl;
    cout << "m - mushrooms $.65" << endl;
    cout << "o - olives $.80" << endl;
    cout << "x - done" << endl;
    cout << "Your choice?" << endl;
    
    cin >> choice;
    while (toupper(choice) != 'X')
    {
        
        switch (choice)
        {
            case 'a':
            case 'A': totalCost=totalCost+.90;
                break;
            case 'b':
            case 'B': totalCost=totalCost+.75;
                break;
            case 'c':
            case 'C': totalCost=totalCost+1;
                break;
            case 'm':
            case 'M': totalCost=totalCost+.65;
                break;
            case 'o':
            case 'O': totalCost=totalCost+.80;
                break;
            default: cout << " Error" << endl;
        }//end of switch
        cout << "Select your choices:" << endl << endl;
        cout << "a - anchovies  $.90 "<< endl;
        cout << "b - bacon  $.75" << endl;
        cout << "c - cheeses mix $1" <<endl;
        cout << "m - mushrooms $.65" << endl;
        cout << "o - olives $.80" << endl;
        cout << "x - done" << endl;
        cout << "Your choice?" << endl;
        
        cin >> choice;
    }//end of while
    cout << "Your pizza will cost:$" << totalCost << " + taxes" << endl;
    cout << "Enjoy! Goodbye!" << endl;
    return 0;
}

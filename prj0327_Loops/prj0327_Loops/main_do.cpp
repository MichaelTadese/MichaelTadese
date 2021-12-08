#include <iostream>
using namespace std;
/*
 Input: a letter grade
 Output: a corresponding message or
 error if the letter was not among A, B, C, D, F
 "do" loop is being used
 */
int main()
{
   char letterGr;
    cout << "\t\t DO LOOP \n\n";
    do{
      cout << "Input a letter grade (A, B, C, D, F, or X-to end): ";
      cin >> letterGr;
      switch (letterGr)
      {
        case 'a':
        case 'A':  cout << " Exceptional work!" << endl;
            break;
        case 'b':
        case 'B':  cout << " Good work!" << endl;
            break;
        case 'c':
        case 'C':  cout << " Satisfactory work!" << endl;
            break;
        case 'd':
        case 'D':  cout << " Needs improvement" << endl;
            break;
        case 'f':
        case 'F':  cout << " Failing!" << endl;
            break;
        case 'x':
        case 'X':  cout << " End of program" << endl;
            break;
        default: cout << " Error" << endl;
    }//end of switch
        cout << endl;
    }while (toupper(letterGr) != 'X');//end of do
}

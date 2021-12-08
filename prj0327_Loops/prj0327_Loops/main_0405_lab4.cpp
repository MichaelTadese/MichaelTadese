#include <iostream>
using namespace std;
/*
 Input: a letter grade
 Output: a corresponding message or
 error if the letter was not among A, B, C, D, F, O
 "for" loop is being used
 */
int main()
{
    char letterGr;
    int nrSt;
   
    cout << "\t\t FOR LOOP \n\n";
    cout << "Input how many students?";
    cin >> nrSt;

    for (int i = 0; i < nrSt; i++)
   {
       cout << "Input a letter grade (A, B, C, D, F, or O for overseas): ";
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
        case 'o':
        case 'O':  cout << " Overseas – Grade to be completed upon return." << endl;
            break;
        default: cout << " Error" << endl;
    }//end of switch
    }//end of for
    cout << "Program has exited!" << endl;
    return 0;
}

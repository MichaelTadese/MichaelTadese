#include <iostream>
using namespace std;
/*
 Input: -nr. of elem
        -elements of an array (integers)
 Output: -the inital array
         -the new array (elements are doubled
 */
int main ()
{
    int n, i;
    float num[10];
    cout <<"Input the total number of elements of the array:"<<endl;
    cin >> n;
    cout<< "Input all the " << n << " elements of the array:"<< endl;
  
    for (i = 0; i < n; i++ ) {
        cin>>num[i];
    }
    cout<<endl;
    cout<< "The initial array is: "<< endl;
      for (i = 0; i < n; i++ ){
          cout<<num[i]<<"\t";
    }
    cout<<endl<<endl;
      for (i = 0; i < n; i++ ){
          num[i] = num[i] * 2;
 }
    cout<< "The final array is: "<< endl;
      for (i = 0; i < n; i++ ){
          cout<<num[i]<<"\t";
      }
    cout<<endl;
}

// Add your code here
#include <iostream>
using namespace std;
int factorial (int N)
{
    int i=0;
    int fac=1;
    for (int n=N; n>0; n--) {
        i += 1;
        fac *= i;

    }
    return fac;
}
int main ()
{
    int n ;
    cout << "Please enter an integer value: " << endl;
    cin >> n;
    
    cout << "The value you entered is " << n << " and its factorial is " << factorial (n) << endl;
    
}
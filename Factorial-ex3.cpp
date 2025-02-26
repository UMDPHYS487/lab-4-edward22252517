// Add your code here
#include <iostream>
using namespace std;

int main ()
{
    int n = 10;
    int i = 0;
    int fac = 1;
    while (n>0) {
        i += 1;
        fac *= i;
        

        cout << "factorial of " << i << "is" << fac << endl;
        --n;
    }

}
#include <iostream>
using namespace std;

int main()
{
    int i;
    int n = 0;  
    cin >> i;
    if (i % 2 == 0 && i < 10) {
        n = 1;
    }
    else if (i % 2 == 1) {
        n = 2;
    }
    else {
        n = 3;
    }    
    switch (n)
    {
        case 1:
            cout << i * i << endl;
            break;  
            
        case 2:              
            cout << i / 2 << endl;
            break;
            
        case 3:              
            cout << "haha" << endl;
            break;
    }
    return 0;
}
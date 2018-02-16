#include <iostream>
#include <unistd.h>

using namespace std;



int main() {

    long long a, b;
    a = 1;
    b = 1;
    cout << a << endl;
    cout << b << endl;
    
    long long i = 0;
    while (i < 100) {
        a = a + b;
        cout << a << endl;
        b = b + a;
        cout << b << endl;
        i++ ;
    }
}

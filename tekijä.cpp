#include <iostream>
#include <cmath>

using namespace std;

bool onAlkuluku(int);

bool onAlkuluku(int luku) {
    bool on_alkuluku = true;
    for (int i = 2; i < luku; i++) {
        if (luku % i == 0) {
            on_alkuluku = false;
            break;
        }
    }
    return on_alkuluku;
}

int main() {
    int input;
    cin >> input;

    cout << "---" << endl;

    for (int i = 2; i <= input; i++) {
        if (input % i == 0 and onAlkuluku(i)) {
            cout << i << endl;
            input /= i;
            i = 1;
        }
    }
    return 0;
    // cout << onAlkuluku(12) << endl;
}

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;

typedef vector<int> int_vector;

void printVector(vector<int> vector) {
    for (unsigned int i; i < vector.size(); i++) {
        cout << vector[i] << ", ";
    }
    cout << "\n";
    return;
}

int main() {
    int input;
    cout << "Give a number: ";

    cin >> input;

    const long double sysTimeAlku = time(0);
    const long double alku = sysTimeAlku * 1000;

    int_vector alkuluvut;
    alkuluvut.push_back(2);

    bool alkuluku;

    for (int i = 2; i < input; i++) {
        // printVector(alkuluvut);
        alkuluku = true;
        for (unsigned int a = 0; alkuluvut[a] <= floor(sqrt(i)); a++) {
            if (i % alkuluvut[a] == 0) {
                alkuluku = false;
                break;
            }
        }
        if (alkuluku == true) {
            cout << i << endl;
            alkuluvut.push_back(i);
            alkuluku = false;
        }
    }
    const long double sysTimeLoppu = time(0);
    const long double loppu = sysTimeLoppu * 1000;

    const long double total = loppu - alku;
    cout << "Aikaa meni: " << total << "ms." << endl;
    return 0;
}

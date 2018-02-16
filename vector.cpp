#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printVector(vector<string> a){
    for (unsigned int i; i < a.size(); i++)
    cout << a[i] << ", ";
    cout << endl;
}

int main() {
    vector<string> a;
    bool x = true;
    string input;
    while (x == true) {
        cin >> input;
        if (input == "perkele"){
            x = false;
        }
        a.push_back(input);
        printVector(a);
    }
    return 0;
}

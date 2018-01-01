#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int length;

    cin >> length;
    cin.ignore();

    for (int i = 0; i < length; i++) {
        string str;
        
        getline(cin, str);
        int strLength = str.length();
        // cout << "String is: " << str << ", ";
        // cout << "String length: " << strLength << ". ";
        for (int j = 0; j < strLength; j += 2) {
            cout << str[j];
        }

        cout << " ";

        for (int k = 1; k < strLength; k += 2) {
            cout << str[k];
        }

        cout << endl;
    }
    return 0;
}

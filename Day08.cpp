#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int length;
    cin >> length;
    cin.ignore();

    map<string, string> phoneBook;

    for (int i = 0; i < length; i++) {
        string rawStr;
        getline(cin, rawStr);

        string name;
        string number;
        int spaceIndex;

        for (int j = 0; j < rawStr.length(); j++) {
            if (rawStr[j] == ' ') {
                spaceIndex = j;
                break;
            }
        }

        name = rawStr.substr(0, spaceIndex);
        number = rawStr.substr(spaceIndex + 1, rawStr.length());

        phoneBook[name] = number;
    }

    string name;
    while (getline(cin, name)) {
        if (phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}

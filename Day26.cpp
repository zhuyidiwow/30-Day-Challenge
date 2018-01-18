#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Date {
  public:
  	int day, month, year;

    Date(string line) {
        int m = 0;
        int counter = 0;

        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ' ') {
                switch (counter) {
                case 0:
                    day = stoi(line.substr(m, i));
                    break;
                case 1:
                    month = stoi(line.substr(m, i));
                    year = stoi(line.substr(i + 1, line.length()));
                           break;
                }
                counter++;
                m = i + 1;
            }
        }
    }
};
int main() {
    string firstLine;
    getline(cin, firstLine);

    string secondLine;
    getline(cin, secondLine);

    Date* r = new Date(firstLine);
    Date* e = new Date(secondLine);

    int fine;
    if (r->year > e->year) {
    	fine = 10000;
    } else if (r->month > e->month) {
    	fine = (r->month - e->month) * 500;
    } else if (r->day > e->day) {
    	fine = (r->day - e->day) * 15;
    } else {
    	fine = 0;
    }

    delete r, e;

    cout << fine;
    return 0;
}

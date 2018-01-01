#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    bool weird = false;

    if (N % 2 == 1) {
        weird = true;
    } else {
        if (N >= 2 && N <= 5) {
            weird = false;
        }

        if (N >= 6 && N <= 20) {
            weird = true;
        }

        if (N > 20) {
            weird = false;
        }
    }

    if (weird) {
        cout << "Weird" << endl;
    } else {
        cout << "Not Weird" << endl;
    }
    return 0;
}








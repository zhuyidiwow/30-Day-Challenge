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
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;

    stack<int> biStack;

    while (n >= 1) {
        int bi = n % 2;
        biStack.push(bi);
        n = (n - bi) / 2;
    }

    string str = "";

    int i = 0;
    while (!biStack.empty()) {
        str.append(std::to_string(biStack.top()));
        biStack.pop();
        i++;
    }

    i = 0;
    int maxConsec = 0;
    int currentConsec;

    for (int i = 0; i < str.length(); i++) {
        currentConsec = 0;
        for (int j = i; j < str.length(); j++) {
            if (str[j] == '1') {
                currentConsec++;
            } else {
                break;
            }
        }

        if (currentConsec > maxConsec) {
            maxConsec = currentConsec;
        }
    }
    
    cout << maxConsec;

    return 0;
}

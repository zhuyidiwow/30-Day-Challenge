#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

class Difference {
    private:
    vector<int> elements;
  
    public:
    int maximumDifference;

    Difference(vector<int> arr) {
        elements = arr;
        maximumDifference = -1;
    }

    int computeDifference() {
        
        for (int i = 0; i < elements.size() - 1; i++) {
            for (int j = i + 1; j < elements.size(); j++) {
                int d = computeD(elements[i], elements[j]);
                if (d > maximumDifference) {
                    maximumDifference = d;
                }
            }
        }

        return maximumDifference;
    }

    int computeD(int a, int b) {
        int result;

        if (b > 0) {
            result = a - b;
        } else {
            result = a + b;
        }
        
        if (result < 0) result *= -1;

        return result;
    }


}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
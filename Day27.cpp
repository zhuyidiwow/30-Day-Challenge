#include <iostream>
#include <random>
#include <vector>

using namespace std;

int range(int min, int max) {
    std::random_device rdev {};
    std::default_random_engine e{rdev()};
    std::uniform_int_distribution<int> d{min, max};
    return d(e);
}

int main() {
    int t = 5;
    cout << t << endl;

    for (int m = 0; m < t; m++) {
        int n = range(3, 200);
        int k = range(1, n);
        // cout << k << " was generated with constraints (1, " << n << ")." << endl;
        vector<int> arr(n);

        arr[0] = 0;
        arr[1] = range(-1000, -1);
        arr[2] = range(1, 1000);
        for (int i = 3; i < n; i++) {
            arr[i] = range(-1000, 1000);
        }
        
        cout << n << " " << k << endl;
        for (int i = 0; i < n - 1; i++) {
        	cout << arr[i] << " ";
        }
        cout << arr[n - 1] << endl;
    }

    return 0;
}
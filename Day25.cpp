// 如果一个数不能被它的平方根以及更小的数整除，它就是质数
// 但怎么确定其他数不能整除它呢
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkPrime(int n) {
	if (n == 0 || n == 1) {
    	return false;
    }

    int sqrtn = sqrt(n);

    for (int i = 2; i <= sqrtn; i++) {
    	if (n % i == 0) {
    		return false;
    	}
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
    	int n;
    	cin >> n;
    	bool isPrime = checkPrime(n);
    	if (isPrime) cout << "Prime" << endl;
    	else cout << "Not prime" << endl;
    }
    
    return 0;
}
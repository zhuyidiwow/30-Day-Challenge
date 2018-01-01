#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double price;
    double tipPercent;
    double taxPercent;
    
    cin >> price;
    cin >> tipPercent;
    cin.ignore();
    cin >> taxPercent;
    
    double totalPrice = price * (100 + tipPercent + taxPercent) / 100;
    cout << "The total meal cost is " << round(totalPrice) << " dollars." << endl;
    return 0;
}

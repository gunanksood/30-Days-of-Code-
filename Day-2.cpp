#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {  
    int tipPercent;
    int taxPercent;
    double mealCost;
    cin >> mealCost >> tipPercent >> taxPercent;
    
    double tip = mealCost * tipPercent / 100;
    double tax = mealCost * taxPercent / 100;
    int totalCost = round(mealCost + tip + tax);
    
    printf("The total meal cost is %d dollars.", totalCost);
    
    return 0;
}

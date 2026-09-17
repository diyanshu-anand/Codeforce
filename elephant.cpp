#include <iostream>

using std::cin;
using std::cout;

int main () {

    int fhx = 0;
    cin >> fhx;

    int currentLocation = 0;
    int maxStep = 5;

    int steps = 0;

    while (currentLocation != fhx)
    {
        while (currentLocation + maxStep > fhx)
        {
            maxStep--;
        }
        
        currentLocation += maxStep;
        steps++;
    }
    
    cout << steps;

    return 0;
}
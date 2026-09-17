#include <iostream>

using std::cin;
using std::cout;

int main () {

    int limakW=0, bobW=0;
    cin >> limakW >> bobW;
    int years = 0;

    while (limakW <= bobW)
    {
        limakW*=3;
        bobW*=2;

        years++;
    }
    
    cout << years;
    

    return 0;
}
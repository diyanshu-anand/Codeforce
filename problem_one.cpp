#include <iostream>

using namespace std;

int main () {
    int w;
    
    cin >> w;
    if (w <= 2 || w > 100) {
        printf("NO");
    }
    else if (w % 2 == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
#include <iostream>
#include <cmath>  // for abs
using namespace std;

int main() {
    for (int k = -100; k <= 100; ++k) {
        if (abs(3 - k) >= abs(14 + k)) {
            cout << k << " ";
        }
    }
    return 0;
}

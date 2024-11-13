#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0;
    long long giai_thua = 1;
    float ln_2 = 1, pi = 1;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        giai_thua *= i;
        if (i % 2 == 0) {
            ln_2 -= 1 / n;
            pi -= 1 / (2 * n + 1);
        }
        else {
            ln_2 += 1 / n;
            pi += 1 / (2 * n + 1);
        }
    }
    for (int i = 1; i <= (int)sqrt(n); ++i) {
        sum += i * i;
        cout << i * i << " ";
    }
    cout << endl;
    cout << "S = " << sum;
    return 0;
}
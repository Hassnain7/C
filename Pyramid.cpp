#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

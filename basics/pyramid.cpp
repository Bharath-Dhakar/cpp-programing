#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++) {
       char ch = 'A';

        for (int j = 1; j <= n - i; j++) {
            cout << "  "; 
        }

    
        for (int k = 1; k <= 2 * i+1 ; k++) {
            cout << ch++ << " ";
        }
     
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    // 1Toi uu hoa doc/ghi
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Vong lap ngoai: Bang cuu chuong tu 2 den 9
    for (int i = 2; i <= 9; i++) {
            for (int j = 1; j <= 10; j++) {
                cout << i << " x " << j << " = " << i * j << "\n";
        }
        
        // Chi in dong trong (blank line) neu chua den bang so 9
        if (i < 9) {
            cout << "\n";
        }
    }
    
    return 0;
}
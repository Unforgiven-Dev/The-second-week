#include <iostream>

using namespace std;

int main() {
    // Toi uu hoa doc/ghi
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 

    // Doc du lieu cho n
    if (cin >> n) {
        
        // Xu ly ngay truong hop N = 0 (Khong in gi va ket thuc chuong trinh)
        if (n == 0) {
            return 0; 
        }

        // Khai bao mang kich thuoc co dinh (du rong de chua toi da 20 phan tu)
        long long fibs[25]; 
        
        // Tinh toan day Fibonacci
        fibs[0] = 0;
        if (n > 1) {
            fibs[1] = 1;
        }

        for (int i = 2; i < n; i++) {
            fibs[i] = fibs[i - 1] + fibs[i - 2];
        }
        
        // In ket qua
        for (int i = 0; i < n; i++) {
            // Chi in khoang trang tu phan tu thu 2 tro di
            if (i > 0) {
                cout << " "; 
            }
            cout << fibs[i];
        }
        cout << "\n";
    }
    
    return 0;
}
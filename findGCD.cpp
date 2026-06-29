#include <iostream>

using namespace std;

// Hàm tìm UCLN
long long findGCD(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    // Toi uu hoa doc/ghi
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        long long current_gcd;
        
        // Đọc số đầu tiên và gán làm UCLN ban đầu
        cin >> current_gcd; 
        
        // Bắt đầu vòng lặp đọc (n-1) số còn lại (nếu có)
        for (int i = 1; i < n; i++) {
            long long num;
            cin >> num; // Đọc số tiếp theo
            
            // Tính UCLN của UCLN hiện tại và số vừa đọc
            current_gcd = findGCD(current_gcd, num);
        }
        
        // In kết quả duy nhất ra màn hình
        cout << current_gcd << "\n";
    }
    return 0;
}
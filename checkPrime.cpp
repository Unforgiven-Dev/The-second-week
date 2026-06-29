#include <iostream>

using namespace std;

int main(){
    // Toi uu hoa doc/ghi
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    // Doc du lieu 
    if (cin >> n){
        // Xử lý trường hợp n < 2 (bao gồm cả n = 1)
        if (n < 2) {
            cout << "NO\n";
        } 
        else {
            // Đặt cờ hiệu: Mặc định giả sử n là số nguyên tố
            bool isPrime = true;
            
            // Bắt đầu vòng lặp từ 2 (vì mọi số đều chia hết cho 1)
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false; // Phát hiện chia hết -> Không phải số nguyên tố
                    break;           // Thoát vòng lặp ngay lập tức để tiết kiệm thời gian
                }
            }
            
            // Dựa vào cờ hiệu để in ra kết quả cuối cùng
            if (isPrime) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
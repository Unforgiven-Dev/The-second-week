#include <iostream>

using namespace std;

int main(){
    // Toi uu hoa doc/ghi du lieu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Khai bao va doc so luong diem n
    int n;
    if (cin >> n) { 
        // Phai doc n thanh cong thi moi lam tiep
        
        // Khai bao va KHOI TAO cac bien dem bang 0
        int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0;

        // Vong lap xet diem so thuc
        for (int i = 0; i < n; i++){
            double a;
            // Doc diem cua tung hoc sinh
            if (cin >> a){
                // Kiem tra diem hop le (tu 0 den 10)
                if (a > 10.0 || a < 0.0) {
                    // Bo qua diem loi va khong dem
                    continue; 
                }
                else if (a <= 10.0 && a >= 9.0)
                    A++; 
                else if (a < 9.0 && a >= 8.0)
                    B++;
                else if (a < 8.0 && a >= 7.0)
                    C++;
                else if (a < 7.0 && a >= 6.0)
                    D++;
                else if (a >= 5.0)
                    E++;
                else 
                    F++;
            }
        }
        
        // Ghi du lieu ra man hinh
        cout << A << " " << B << " " << C << " " << D << " " << E << " " << F << "\n";
    }
    
    return 0;
}
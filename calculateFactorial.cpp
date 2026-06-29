#include <iostream>

using namespace std;

int main(){
    // Toi uu hoa nhap xuat
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Khai bao bien
    int n;
    long long factorial = 1; 

    // Doc du lieu n
    if (cin >> n){
        // Vong lap tinh giai thua
        for (int i = n; i > 0; i--){
            factorial *= i;
        }
        
        // In ket qua ra man hinh
        cout << factorial << "\n";
    }
    
    return 0;
}
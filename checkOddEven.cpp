#include <iostream>

using namespace std;

int main(){
    //Toi uu hoa doc/ghi du lieu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Khai bao kieu du lieu 
    int n;

    //Doc du lieu tu dau vao
    if (cin >> n){
        // n > 0 ghi du lieu ra man hinh "Duong"
        if (n > 0) 
            cout << "Duong" << endl;
        // n < 0 ghi du lieu ra man hinh "Am"
        else if (n < 0)
            cout << "Am" << endl;
        // n = 0 ghi du lieu ra man hinh "Bang 0"
        else 
            cout << "Bang 0" << endl;
        
        // Kiem tra chan le
        string checkOddEven;
        checkOddEven = (n % 2 == 0) ? "Chan" : "Le";
        cout << checkOddEven << endl;

        //Kiem tra tinh chia het cho 3
        string checkDivisibleFor3;
        checkDivisibleFor3 = (n % 3 == 0) ? "Chia het cho 3" : "Khong chia het cho 3";
        cout << checkDivisibleFor3 << endl;
    }
    return 0;
}
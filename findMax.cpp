#include <iostream>

using namespace std;

int main(){
    // Toi uu hoa doc/ghi du lieu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Khai bao bien
    int a, b, c, maxValue;

    // Doc du lieu a, b, c
    if (cin >> a >> b >> c){
        // Tim so lon nhat giua a va b
        maxValue = (a > b) ? a : b;
        
        // So sanh tiep maxValue voi c de tim ra so lon nhat cuoi cung
        maxValue = (maxValue > c) ? maxValue : c;
        
        // In ket qua ra man hinh
        cout << maxValue << "\n";
    }
    return 0;
}
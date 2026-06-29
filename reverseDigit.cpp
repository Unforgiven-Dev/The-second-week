#include <iostream>
using namespace std;

// Ham dao nguoc so
int reverseDigit(int a){
    int reverse = 0;
    int isNegative = 0;

    // Xu ly dau
    if (a < 0){
        isNegative = 1;
        a = -a;
    }

    // Dao nguoc cac chu so
    while (a > 0){
        int n = a % 10;
        reverse = reverse * 10 + n;
        a /= 10;
    }

    // Tra lai dau am neu co
    if (isNegative == 1){
        reverse = -reverse;
    }
    return reverse;
}

int main(){
    // Toi uu hoa doc/ghi du lieu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;

    // Doc du lieu 
    if (cin >> a){
        // In truc tiep ket qua tra ve tu ham
        cout << reverseDigit(a) << "\n";
    }
    return 0;
}
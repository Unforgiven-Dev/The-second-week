#include <iostream>
#include <cstdlib> // Thu vien cho rand(), srand()
#include <ctime>   // Thu vien cho time()

using namespace std;

int main() {
    // Toi uu hoa doc/ghi
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Khoi tao hat giong random
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;

    // Lien tuc doc gia tri nguoi dung nhap vao
    while (cin >> guess) {
        attempts++; // Tang so luot doan len 1

        // 1. Kiem tra xem co vuot qua 10 luot chua
        if (attempts > 10) {
            cout << "Too many attempts! The number was " << secretNumber << "\n";
            break; // Ket thuc luon tro choi
        }

        // 2. Neu chua vuot qua, bat dau so sanh
        if (guess < secretNumber) {
            cout << "Too low!\n";
        } 
        else if (guess > secretNumber) {
            cout << "Too high!\n";
        } 
        else { // guess == secretNumber
            cout << "Correct! You took " << attempts << " attempts\n";
            break; // Doan trung -> Ket thuc tro choi
        }
    }
    
    return 0;
}
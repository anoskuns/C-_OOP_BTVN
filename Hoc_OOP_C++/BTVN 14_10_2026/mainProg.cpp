#include <iostream>
#include "Fraction.h"
using namespace std;

// Hàm hỗ trợ vẽ đường phân cách cho console đẹp hơn
void printLine() {
    cout << "\n----------------------------------------\n";
}

int main() {
    Fraction ps1(0,1);
    Fraction ps2(0,1);

    cout << "============= BTVN PHAN SO =============" << endl;

    // 1. Nhập và xuất phân số
    cout << "\n[1] NHAP PHAN SO THU 1" << endl;
    cin >> ps1;
    cout << "=> Phan so 1 vua nhap la: " << ps1 << endl;
    printLine();

    // 2. Test hàm lấy giá trị 
    cout << "[2] KIEM TRA GET_TU VA GET_MAU" << endl;
    cout << "-> Tu so cua ps1 : " << ps1.get_tu() << endl;
    cout << "-> Mau so cua ps1: " << ps1.get_mau() << endl;
    printLine();

    // 3. Test hàm gán giá trị 
    cout << "[3] KIEM TRA SET_TU VA SET_MAU" << endl;
    long long a, b;
    cout << "Nhap tu so moi cho ps1: "; cin >> a;
    ps1.set_tu(a);
    cout << "=> ps1 hien tai: " << ps1 << endl << endl;

    cout << "Nhap mau so moi cho ps1: "; cin >> b;
    ps1.set_mau(b);
    cout << "=> ps1 hien tai: " << ps1 << endl;
    printLine();

    // 4. Test nghịch đảo
    cout << "[4] KIEM TRA NGHICH DAO" << endl;
    cout << "Phan so 1 truoc khi nghich dao: " << ps1 << endl;
    ps1.nghichdao();
    cout << "=> Phan so 1 sau khi nghich dao : " << ps1 << endl;
    printLine();

    // 5. Nhập phân số 2 và rút gọn
    cout << "[5] NHAP PHAN SO THU 2 VA RUT GON" << endl;
    cin >> ps2;
    cout << "Phan so 2 truoc khi rut gon: " << ps2 << endl;
    ps2.rutgon();
    cout << "=> Phan so 2 sau khi rut gon : " << ps2 << endl;
    printLine();

    // 6. Test các phép toán
    cout << "[6] KIEM TRA CAC PHEP TOAN TREN PHAN SO" << endl;
    cout << "Cac phan so hien tai: ps1 = " << ps1 << " | ps2 = " << ps2 << endl << endl;

    cout << "-> Tong   (ps1 + ps2) = " << (ps1 + ps2) << endl;
    cout << "-> Hieu   (ps1 - ps2) = " << (ps1 - ps2) << endl;
    cout << "-> Tich   (ps1 * ps2) = " << (ps1 * ps2) << endl;
    cout << "-> Thuong (ps1 / ps2) = " << (ps1 / ps2) << endl;


    return 0;
}
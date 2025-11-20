#include <iostream>

using namespace std;

int main() {
    double nilai;

    cout << " --- Program Penentuan Nilai Mutu --- " << endl;
    cout << " Masukkan nilai angka : ";
    cin >> nilai;

    cout << "\nHasil" << endl;

    if (nilai > 95) {
        cout << "Nilai : A" << endl;
        cout << "Keterangan : Naik Kelas" << endl;
    }
    else if (nilai > 82 && nilai <= 95) {
        cout << "Nilai : B" << endl;
        cout << "Keterangan : Naik Kelas" << endl;
    }
    else if (nilai > 70 && nilai <= 82) {
        cout << "Nilai : C" << endl;
        cout << "Keterangan : Naik Kelas" << endl;
    }
    else if (nilai > 55 && nilai <= 70) {
        cout << "Nilai : D" << endl;
        cout << "Keterangan : Tinggal Kelas" << endl;
    }
    else if (nilai <= 55) {
        cout << "Nilai : E" << endl;
        cout << "Keterangan : Tinggal Kelas" << endl;
    }
    return 0;
}
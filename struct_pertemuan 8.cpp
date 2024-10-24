#include <iostream>
#include <string>

using namespace std;

struct Zodiak {
    string nama;
    int startBulan;
    int startHari;
    int endBulan;
    int endHari;
};

Zodiak zodiaks[] = {
    {"CAPRICORN", 12, 22, 1, 19},
    {"AQUARIUS", 1, 20, 2, 18},
    {"PISCES", 2, 19, 3, 20},
    {"ARIES", 3, 21, 4, 19},
    {"TAURUS", 4, 20, 5, 20},
    {"GEMINI", 5, 21, 6, 20},
    {"CANCER", 6, 21, 7, 22},
    {"LEO", 7, 23, 8, 22},
    {"VIRGO", 8, 23, 9, 22},
    {"LIBRA", 9, 23, 10, 22},
    {"SCORPIO", 10, 23, 11, 21},
    {"SAGITTARIUS", 11, 22, 12, 21},
};

string tentukanZodiak(int tanggal, int bulan) {
    for (const auto& z : zodiaks) {
        if ((bulan == z.startBulan && tanggal >= z.startHari) ||
            (bulan == z.endBulan && tanggal <= z.endHari)) {
            return z.nama;
        }
    }
    return "Tidak Dikenal";
}

int main() {
    int tanggal, bulan, tahun;

    cout << "Nama  : Muhammad Hafidz Rizqi Rukmana" << endl;
    cout << "Kelas : 1B Informatika" << endl;
    cout << "NPM   : 2410631170037" << endl;
    cout << "\nTugas Pertemuan 8 Struct" << endl;

    cout << "\n\nTanggal Lahir Anda [tgl-bln-tahun]: ";
    char delimiter;
    cin >> tanggal >> delimiter >> bulan >> delimiter >> tahun;

    string zodiakHasil = tentukanZodiak(tanggal, bulan);
    cout << "Zodiak Anda adalah: " << zodiakHasil << endl;

    return 0;
}

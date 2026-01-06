#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double r, h_tabung, h_kerucut;

    cout << "=============================================================\n";
    cout << "     MENGHITUNG AKAR DARI (VOLUME TABUNG - VOLUME KERUCUT)   \n";
    cout << "=============================================================\n\n";

    // Input
    cout << "Masukkan jari-jari (r)           : ";
    cin >> r;

    cout << "Masukkan tinggi tabung (h_t)     : ";
    cin >> h_tabung;

    cout << "Masukkan tinggi kerucut (h_k)    : ";
    cin >> h_kerucut;

    cout << "\n-------------------------------------------------------------\n";
    cout << "                PROSES PERHITUNGAN                           \n";
    cout << "-------------------------------------------------------------\n";

    // Hitung volume tabung dan kerucut
    double volume_tabung  = M_PI * r * r * h_tabung;
    double volume_kerucut = (1.0 / 3.0) * M_PI * r * r * h_kerucut;
    double selisih = volume_tabung - volume_kerucut;

    // Volume Tabung
    cout << fixed << setprecision(4);
    cout << "\nVolume Tabung (Vt)\n";
    cout << " = π × r² × h_t\n";
    cout << " = " << M_PI << " × " << r << "² × " << h_tabung << "\n";
    cout << " = " << M_PI << " × " << (r * r) << " × " << h_tabung << "\n";
    cout << " = " << volume_tabung << "\n";

    // Volume Kerucut
    cout << "\nVolume Kerucut (Vk)\n";
    cout << " = 1/3 × π × r² × h_k\n";
    cout << " = 1/3 × " << M_PI << " × " << r << "² × " << h_kerucut << "\n";
    cout << " = 1/3 × " << M_PI << " × " << (r * r) << " × " << h_kerucut << "\n";
    cout << " = " << volume_kerucut << "\n";

    // Selisih
    cout << "\nSelisih Volume (Vt - Vk)\n";
    cout << " = " << volume_tabung << " - " << volume_kerucut << "\n";
    cout << " = " << selisih << "\n";

    // Cek nilai negatif
    if (selisih < 0) {
        cout << "\n!!! ERROR: Selisih negatif, akar tidak dapat dihitung !!!\n";
        return 0;
    }

    // Akar
    double hasil_akar = sqrt(selisih);

    cout << "\nAkar dari Selisih\n";
    cout << " = √(" << selisih << ")\n";
    cout << " = " << hasil_akar << "\n";

    cout << "\n-------------------------------------------------------------\n";
    cout << "                      HASIL AKHIR                            \n";
    cout << "-------------------------------------------------------------\n";
    cout << "√(Vt - Vk) = " << hasil_akar << "\n";
    cout << "=============================================================\n";

    return 0;
}

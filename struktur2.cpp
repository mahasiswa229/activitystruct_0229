#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct mahasiswa
{
    string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main()
{
    mahasiswa mhs;
	cout << "Nomor Mahasiswa = ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa = ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa = ";
	cout << "\t nama Desa = ";
	cin >> mhs.alamat.desa;
	cout << "\t nama Kota = ";
	cin >> mhs.alamat.kota;
	cout << "Umur Mahsiswa = ";
	cin >> mhs.umur;
};
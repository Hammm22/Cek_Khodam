#include <iostream> //untuk fungsi input output
#include <cstdlib> //untuk fingsi rand() dan srand()
#include <ctime> //untuk fingsi time
using namespace std;

//fungsi untuk menghasilkan ramalam khodam secara acak
string cekKhodam() {
	//daftar-daftar khodam
string khodamList[]= {
	"Harimau Mewing",
	"Singa balap",
	"Kucing Skibidi",
	"Tikus tidur",
	"Rubah terbang",
	"Buaya Ghoib",
	"Paus",
	"Lumba-lumba mewing",
	"anjing balap",
	"jaguar bobo"
};

//menghasilkan index acak untuk memilih khodam
int randomIndex = rand() % 10;

//untuk mengembalikan nama khodam yang dipilih secara acak/ return
return khodamList[randomIndex];
}

int main() {
	//inisiasi random seed
	srand(time(0));
		//deklarasi variabel untuk input user
	string nama;
	int hari,bulan,tahun;
	
	//meminta input dari user
	cout << "Selamat datang di program cek khodam!" << endl;
	cout << "Silahkan masukkan nama anda: ";
	getline(cin, nama); //untuk mengambil nama user
	cout << "Masukkan Tanggal lahir anda (1-31): ";
    cin >> hari;
	cout << "Masukkan Bulan lahir anda: ";
	cin >> bulan;
	cout << "Masukkan Tahun lahir anda: ";
	cin >> tahun;
	
	//menampilkan khodam secara acak
	cout << endl;
	cout <<	"Hallo, " << nama << "! Berdasarkan tanggal,bulan,dan tahun kelahiran anda, kami mendapati bahwa khodam anda adalah: " <<  cekKhodam() << endl;
	cout << "Made by Hamm22";
	
	return 0;
}
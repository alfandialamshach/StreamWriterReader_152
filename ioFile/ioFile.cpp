#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//memasukkan nama file secara spesifik
	// string namafile;
	// cout  << "Masukkan namafile";
	// //cin >> namafile;
	
	// Membuka file dalam mode menulis.
	ofstream outfile;
	// menunjuk ke sebuah nama file.
	outfile.open("contohfile.txt");
	// outfile.open(namafile+("txt",ios::out);
	//outfile.open("D:\pemdas\namafile.txt")

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda masukkan karakter q
		if (baris == "q") break;
	}
}
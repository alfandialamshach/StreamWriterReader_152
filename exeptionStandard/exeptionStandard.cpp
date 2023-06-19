#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //Penanda 1:...
	try {
		array <int, 3> data = { 1, 2, 3 };
		//pesan array integer 3 element
		cout << data.at(4) << endl;
		//Memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception
		cout << e.what() << endl;
		//akan dieksekusi karena array data hanya memiliki 3 elemen
	}
	cout << "baris program yang terakhir" << endl;
	//penanda 2: Bahwa program berjalan tanpa henti meskipun terjadi kesalahan
	return 0;
}
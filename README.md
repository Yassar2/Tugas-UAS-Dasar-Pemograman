# Tugas-UAS-Dasar-Pemograman
# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemogrman
<br> Nama		: Yassar Malik Arrasyid
<br>NIM		:	 1227050133
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Tema dari source code ini adalah untuk:
Membuat array 2 dimensi yang dapat mengubah sebuah kolom menjadi baris dan sebaliknya
Juga dapat mencari bilangan yang habis dibagi jika dibagi oleh angka 3,5,dan 7.

Algoritma dari source code ini:

User menginputkan berapa banyak baris pada array yang akan dimasukan
User menginputkan berapa banyak kolom pada array yang akan dimasukan
User menginputkan nilai satu persatu pada array,dimulai dari baris 1 dan kolom 1.
Setelah nilai-nilai di input, Nilai dalam array tersebut di tampilkan sesuai aturan matriks.
Kemudian nilai dicek kembali apakah nilai tersebut dapat habis jika dibagi 3,5 dan 7.
Jika nilai habis dibagi 3,5 dan 7, nilai akan ditampilkan kepada user. Jika tidak habis, nilai tidak akan ditampilkan kembali kepada user
## Source Code
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
	cout<< "Nama	: Yassar Malik Arrasyid"<<endl;
	cout<<"NIM	: 1227050133"<<endl;
	cout << "==========================================" << endl;
  cout << "Program Array 2 dimensi input kolom dan baris dan input angkanya" << endl;
  cout << "==========================================" << endl;
  cout << endl;
 
  int matriks[100][100];
  int brs, klm, i, j, n, u, p;
 
  cout << "Input jumlah baris matriks: ";
  cin >> brs;
 
  cout << "Input jumlah kolom matriks: ";
  cin >> klm;
  cout << endl;
 
  for(i = 0; i < brs ; i++){
    for(j = 0; j < klm; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }
 
  cout << "Hasil matriks: " << endl;
 
  // menampilkan array
  for(i = 0; i < brs ; i++){
    for(j = 0; j < klm; j++){
      cout << setw(3) << matriks[i][j] << " ";
    }
    cout << endl;
  }
  
  cout<< "Hasil Matriks Terbalik: "<<endl;
  
  // menampilkan array
  for(i = 0; i < klm ; i++){
    for(j = 0; j < brs; j++){
      cout << matriks[j][i] << " ";
    }
    cout << endl;
  }
  cout << "==========================================" << endl;
cout << "Bilangan yang habis di bagi 3,5,7: "<<endl<<endl;
for (int i = 0; i < klm; i++){
for (int j = 0; j < brs; j++){
if (matriks[i][j] % 3 == 0|| matriks [i][j] % 5 == 0||matriks [i][j] % 7 == 0) cout << matriks[i][j] << ", "; // Mencetak bilangan yang habis di bagi 3
	}
}
return 0;
}
## Output
<br>Nama    : Yassar Malik Arrasyid
<br>NIM     : 1227050133
==========================================
Program Array 2 dimensi input kolom dan baris dan input angkanya
==========================================

Input jumlah baris matriks: 2
Input jumlah kolom matriks: 3

Baris 1, kolom 1 = 4
Baris 1, kolom 2 = 5
Baris 1, kolom 3 = 6

Baris 2, kolom 1 = 8
Baris 2, kolom 2 = 9
Baris 2, kolom 3 = 20

<br>Hasil matriks:
  4   5   6
  8   9  20
<br>Hasil Matriks Terbalik:
4 8
5 9
6 20
==========================================
Bilangan yang habis di bagi 3,5,7:

5, 9, 0, 0,

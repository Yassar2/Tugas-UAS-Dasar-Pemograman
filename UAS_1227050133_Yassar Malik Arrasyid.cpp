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
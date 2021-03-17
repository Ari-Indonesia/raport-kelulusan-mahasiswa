// Nama : Ari Setiawan 41520010130

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

main()
{
	string nama;
	int uas, uts, responsi, bobot_uts, bobot_uas, bobot_responsi, nilai;
	
	cout << "-------------------------------------" << endl;
	cout << "    Sistem Penilaian Mata Kuliah     " << endl;
	cout << "            ALGORITMA                " << endl;
	cout << "-------------------------------------" << endl;
	cout << endl;
	cout << " Nama Mahasiswa : ";
	cin  >> nama;
	cout << " Nilai UTS      : ";
	cin  >> uts;
	cout << " Nilai UAS      : ";
	cin  >> uas;
	cout << " Nilai Responsi : ";
	cin  >> responsi;
	
	bobot_uts = ( uts * 30 ) / 100;
	bobot_uas = ( uas * 40 ) / 100;
	bobot_responsi = ( responsi * 30 ) / 100;
	nilai = bobot_uts + bobot_uas + bobot_responsi;
	
	system("cls");
	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << "                             HASIL KEPUTUSAN                                       " << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << " NILAI UTS         : " << uts << endl;
	cout << " NILAI UAS         : " << uas << endl;
	cout << " NILAI RESPONSI    : " << responsi << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << " HASIL NILAI AKHIR : " << nilai << endl;
	
	if ( nilai >= 60 ){
		cout << " KETERANGAN        : SELAMAT, "<<nama<<" ! ANDA LULUS" << endl;
	} else {
		cout << " KETERANGAN        : MAAF,  "<<nama<<" ! ANDA HARUS MEMPERBAIKI NILAI" << endl;
	}
	
	getch ();
}

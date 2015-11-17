/*
//dev C++ 4.9.9.2

#include <iostream>
#include <fstream>
#include <string>
#include <conio> //untuk memanggil getch();

using namespace std;

int main ()
{
    string baca;
    string baris;    
    ifstream data;
    data.open ("data.txt"); // membuka file dataku.txt
        while(!data.eof()) //membaca data secara keseluruhan
        {
            getline(data, baris);
            baca += baris+"\n";

        }
    data.close();
    system("cls");
    cout
   // cout<<str;
//	cout&lt;&lt; baca; // menampilkan data ke layar
    getch();
}
*/
//test 123

#include<iostream>
#include<fstream>
#include<string>
#include<conio.h> //untuk memanggil getch

using namespace std;

int main()
{
	string baca;
	string baris;
	ifstream data;
	data.open ("data.txt"); //membuka file
		while(!data.eof()) //membaca data secara keseluruhan
		{
			getline(data, baris);
			baca += baris+"\n";
			
		 } 
	data.close();
	system("cls");
	cout << baca; //menampilkan data ke layar
	getch();
}


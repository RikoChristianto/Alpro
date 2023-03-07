#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

float x,y, hasil;
string angka[2],operasi,ulangi,teks1,teks2,teks3;

//mengmbil dari teks.txt(eksternal)
void teks()
{
    ifstream myfile;
    myfile.open("teks.txt");
    getline(myfile,teks1);
    getline(myfile,teks2);
    getline(myfile,teks3);
}

//user input angka pertama
void input()
{
    teks();
    cout << teks1;
    cin >> angka[0];
}

//user input operasi aritmatika
void input2()
{
    teks();
    cout << teks2;
    cin >> operasi;
}

//user input angka kedua
void input3()
{
    teks();
    cout << teks3;
    cin >> angka[1];
}

//rumus perhitungan kalkulator dan output
void rumus()
{
    stringstream(angka[0]) >> x;
    stringstream(angka[1]) >> y;

    if (angka[0] != "0" && x == 0 || angka[1] != "0" && y == 0){
        cout << "input salah/tidak sesuai" << endl;
    }else if (operasi == "+")
    {
        hasil = x + y;
        cout << "Hasilnya adalah " << hasil << endl;
    }
    else if (operasi == "-")
    {
        hasil = x - y;
        cout << "Hasilnya adalah " << hasil << endl;
    }
    else if (operasi == "*")
    {
        hasil = x * y;
        cout << "Hasilnya adalah " << hasil << endl;
    }
    else if (operasi == "/")
    {
        hasil = x / y;
        cout << "Hasilnya adalah " << hasil << endl;
    }
    else
    {
        cout << "input salah/tidak sesuai" << endl;
    }
}

//menampilkan semua
main()
{
    up:
    input();
    system("cls");
    input2();
    system("cls");
    input3();
    system("cls");
    rumus();
    cout << endl;
    cout << "Aapakah anda mau mengulang? y/n" << endl;
    cin >> ulangi;
    system ("cls");
    if (ulangi == "y"){
        goto up;
    } else if (ulangi == "n"){
        system("cls");
        cout << "Terimakasih";
    } else{
        cout << "Terimakasih";
    }

    return 0;
}

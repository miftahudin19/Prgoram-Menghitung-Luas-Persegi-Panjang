#include <iostream>
using namespace std;

int main ()
{
	int panjang,lebar,luas;
	
	cout <<"Input Panjang : ";
	cin >> panjang;
	
	cout <<"Input Lebar : ";
	cin >> lebar;
	
	//Rumus p * l 
	luas = panjang * lebar;
	cout << "Luas Persegi Panjang = " << luas;
	
	return 0;
}

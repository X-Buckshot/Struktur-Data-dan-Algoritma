#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int *p, *q;
	p = (int *) malloc(sizeof(int));
	q = (int *) malloc(sizeof(int));
	*p = 10;
	*q = 20;
	cout << "Isi info pointer : \n";
	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;
	cout << "\n Alamat register pointer : \n";
	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	p = q;
	cout << "\n Kondisi akhir isi info pointer : \n";
	cout << "*p = " << *p  << endl;
	cout << "*q = " << *q  << endl;
}

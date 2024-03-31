#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int x, y;
	int *px;
	
	x = 87;
	px = &x;
	y = *px;
	
	cout << "Alamat x= " << &x << endl;
	cout << "Nilai x= " << x << endl;
	cout << "Alamat yang ditunjuk oleh px = " << px << endl;
	cout << "Nilai yang ditunjuk oleh px = " << *px << endl;
	cout << "Alamat y= " << &y << endl;
	cout << "Nilai y= " << y;	
}

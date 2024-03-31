#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int value1 = 5, value2 = 15;
	int * mypointer;
	mypointer = &value1;
	*mypointer = 10;
	cout << "\n value1 = " << value1;
	cout << "\n *mypointer = " << *mypointer;
	mypointer = &value2;
	*mypointer = 20;
	cout << "\n value2 = " << value2;
	cout << "\n *mypointer = " << *mypointer;		
}

#include <iostream>
#pragma warning (disable : 4996 6031)
using namespace std;
int Mul(int, int);
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int main() {
	cout << "Hello World" << endl;
	cout << Add(10, 3) << endl;
	cout << Sub(10, 3) << endl;
	cout << Mul(10, 3) << endl;
	return 0;
}
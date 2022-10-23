#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	double pi = 3.14;
	int S;
	int L;
	int R = 2;
	S = (int)pi * R ^ 2;
	cout << "Circle area = " << S << endl;
	L = 2 * pi * R;
	cout << "Circumference = " << L;

}
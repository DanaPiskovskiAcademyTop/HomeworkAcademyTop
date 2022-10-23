#include <iostream>
using namespace std;

int main() {
	int V;
	int S;
	int T;
	cout << "Enter the distance to the airport - "; cin >> S;
	cout << endl;
	cout << "Enter the time for which you need to get there - "; cin >> T;
	cout << endl;
	V = S / T;
	cout << "You will move at speed - " << V << "km\h";
}
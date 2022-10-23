#include <iostream>
using namespace std;

int main() {
	int S;
	double v = 15.52;
	double a = 0.53;
	int t = 60;
	S = v * t + ((int)a * t ^ 2) / 2;
	cout << "Distance covered in meters = " << S;
	
}

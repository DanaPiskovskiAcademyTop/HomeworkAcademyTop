#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int distance;
	int view, view1, view2;
	double consumption, petrol1, petrol2, petrol3, value;
	cout << "Введите растояние" << endl;
	cin >> distance;
	cout << "Введите расход бензина" << endl;
	cin >> consumption;
	cout << "Введи стоимость первого бензина - " ; cin >> petrol1;
	cout << "Введи стоимость второго бензина - " ; cin >> petrol2;
	cout << "Введи стоимость второго бензина - " ; cin >> petrol3;
	value = (distance / 100) * consumption;
	view = value * petrol1;
	view1 = value * petrol2;
	view2 = value * petrol3;
	cout << setw(10) << "Стоимость поездки - " << setw(5) << view << endl;
	cout << setw(10) << "Стоимость поездки - " << setw(5) << view1 << endl;
	cout << setw(10) << "Стоимость поездки - " << setw(5) << view2 << endl;



}
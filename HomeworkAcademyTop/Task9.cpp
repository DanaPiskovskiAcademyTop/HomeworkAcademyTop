#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int distance;
	int view, view1, view2;
	double consumption, petrol1, petrol2, petrol3, value;
	cout << "������� ���������" << endl;
	cin >> distance;
	cout << "������� ������ �������" << endl;
	cin >> consumption;
	cout << "����� ��������� ������� ������� - " ; cin >> petrol1;
	cout << "����� ��������� ������� ������� - " ; cin >> petrol2;
	cout << "����� ��������� ������� ������� - " ; cin >> petrol3;
	value = (distance / 100) * consumption;
	view = value * petrol1;
	view1 = value * petrol2;
	view2 = value * petrol3;
	cout << setw(10) << "��������� ������� - " << setw(5) << view << endl;
	cout << setw(10) << "��������� ������� - " << setw(5) << view1 << endl;
	cout << setw(10) << "��������� ������� - " << setw(5) << view2 << endl;



}
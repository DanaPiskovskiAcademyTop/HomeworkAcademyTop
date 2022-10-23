#include <iostream>
using namespace std;

int main() {
    double h, m, s;
    double h1, m1, s1;
    cout << "Enter the start time of a phone conversation: ";
    cin >> h >> m >> s;
    cout << "Enter the end time of a phone conversation: ";
    cin >> h1 >> m1 >> s1;
    cout << endl;
    double h2, m2, s2;
    double cost, res;
    h2 = (h1 - h) * 3600;
    m2 = (m1 - m) * 60;
    s2 = s1 - s;
    cost = (double)30 / 60;

    res = cost * (h2 + m2 + s2);
    cout << "The cost of a call is: " << res << endl << endl;
    return 0;
}
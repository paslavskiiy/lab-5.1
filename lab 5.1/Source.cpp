// Lab 5_1
#include <iostream>

using namespace std;
double h(const double a, const double b)
{
	return (a * a) - sin(b) * cos(a) + (b * b);
}

int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << endl;
	cout << "t = "; cin >> t;
	cout << endl;

	double c = (h(1, s * t) + h(t + s, 1) * h(t + s, 1)) / (1 + (h(s, t)) * (h(s, t)) * (h(s, t)));
	cout << "c = " << c << endl;
	return 0;
}

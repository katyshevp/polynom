#include "TPolinom.h"



using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int r, m;
	TPolinom p, q, copy;
	cout << "первый полином" << endl;
	cin >> p;
	system("cls");
	cout << "второй полином" << endl;
	cin >> q;
	system("cls");
	cout << "первый полином: " << p << endl;
	cout << "второй полином: " << q << endl;
M1:
	cout << "¬ыберите операцию" << endl;
	cout << " 1)P + Q" << endl;
	cout << " 2)P - Q" << endl;
	cout << " 3)P * Q" << endl;
	cin >> r;
	if (r == 1)
	{
		p += q;
		cout << "P + Q" << endl << p << endl;
		goto M1;
	}
	if (r == 2)
	{
		p -= q;
		cout << "P - Q" << endl << p << endl;
		goto M1;
	}
	if (r == 3)
	{
		cout << "„исло дл€ умножени€:" << endl;
		cin >> m;
		p *= m;
		cout << "P * Q" << endl << p << endl;
		goto M1;
	}
	system("pause");

}

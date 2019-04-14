#include "THeadList.h"
#include <cstdlib>
#include "TPolinom.h"

int main()
{
	int r, m;
	TPolinom p, q,copy;
	cout << "The first polinom :" << endl;
	cin >> p;
	system("cls");
	cout << "The second polinom :" << endl;
	cin >> q;
	cout << "The number dlya umnozheniya :" << endl;
	cin >> m;
	system("cls");
	cout << "The first polinom: " << p << endl;
	cout << "The second polinom: " << q << endl;
	M1:
	cout << "Choose the operation: " << endl;
	cout << "1)+" << endl;
	cout << "2)-" << endl;
	cout << "3)*" << endl;
	cin >> r;
	if (r == 1)
	{
		cout << "OPERATION +" << endl;
		p += q;
		cout << "p+q=" << p << endl;
		goto M1;
	}
	if (r == 2)
	{
		cout << "OPERATION -" << endl;
		p -= q;
		cout << "p-q=" << p << endl;
		goto M1;
	}
	if (r == 3)
	{
		cout << "OPERANION *" << endl;
		p *= m;
		cout << "p*m=" << p << endl;
	}
	system("pause");

}
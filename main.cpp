#include "THeadList.h"
#include <cstdlib>
#include "TPolinom.h"

int main()
{
	double m;
	int r , k;
	TPolinom p, q,copy;
	M1:
	cout << "The first polinom :" << endl;
	cin >> p;
	system("cls");
	cout << "The second polinom :" << endl;
	cin >> q;
	cout << "The multiplication number :" << endl;
	cin >> m;
	system("cls");
	cout << "The first polinom: " << p << endl;
	cout << "The second polinom: " << q << endl;
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
		cout << "Do you want to countinue?" << endl;
		cout << "1)Yes" << endl;
		cout << "2)No" << endl;
		cin >> k;
		if (k = 1)
			goto M1;
		if (k = 2)
		{
			system("cls");
			cout << "----EXIT--------EXIT--------EXIT--------EXIT--------EXIT--------EXIT----" << endl;
		}
	}
	if (r == 2)
	{
		cout << "OPERATION -" << endl;
		p -= q;
		cout << "p-q=" << p << endl;
		cout << "Do you want to countinue?" << endl;
		cout << "1)Yes" << endl;
		cout << "2)No" << endl;
		cin >> k;
		if (k = 1)
			goto M1;
		if (k = 2)
		{
			system("cls");
			cout << "----EXIT--------EXIT--------EXIT--------EXIT--------EXIT--------EXIT----" << endl;
		}
	}
	if (r == 3)
	{
		cout << "OPERANION *" << endl;
		p *= m;
		cout << "p*m=" << p << endl;
		cout << "Do you want to countinue?" << endl;
		cout << "1)Yes" << endl;
		cout << "2)No" << endl;
		cin >> k;
		if (k = 1)
			goto M1;
		if (k = 2)
		{
			system("cls");
			cout << "----EXIT--------EXIT--------EXIT--------EXIT--------EXIT--------EXIT----" << endl;
		}
	}
	system("pause");

}
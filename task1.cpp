#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j = 0, n, count = 1, cur_el, length = 1, element;
	cout << "Введите размерность массива: ";
	cin >> n;

	int* a = new int[n];

	cout << endl << "Введите элементы массива" << endl << endl;
	cout << "a[0] = ";
	cin >> a[0];
	cur_el = a[0];

	for (i = 1; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		if (cur_el != a[i])
		{
		count++;
		}
		cur_el = a[i];
	}

	cout << endl << endl;

	int* b = new int[count];
	int* c = new int[count];

	cur_el = element = a[0];
	for (i = 1; i < n; i++)
	{
		if (cur_el != a[i])
		{
			b[j] = length;
			c[j] = element;
			j++;
			length = 1;
			element = a[i];
		}
		else
		{
			length++;
		}
		cur_el = a[i];
	}
	b[count - 1] = length;
	c[count - 1] = element;

	for (i = 0; i < count; i++)
	{
		cout << "b[" << i << "] = " << b[i] << "        c[" << i << "] = " << c[i] << endl << endl;
	}

	system("pause");
	return 0;
}

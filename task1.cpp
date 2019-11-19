#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, j, count = 1, sum = 0;

	cout << "Введите размерность массива: ";
	cin >> n;

	int *a = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}

	for (i = 0; i <= n; i++)
	{
		while (a[i] == a[i + 1])
		{
			i++;
			count++;
		}
	}

	if (a[i - 2] != a[i - 1])
	{
		count++;
	}

	int *b = new int[n];

	for (i = 0; i < count; i++)
	{
		b[i] = 0;
	}

	int *c = new int[n];

	for (i = 0, j = 0; i < n; i++, j++)
	{
		c[j] = a[i];
		while (a[i] == a[i + 1])
		{

		}

	}


	cout << count;

	system("pause");
	return 0;
}

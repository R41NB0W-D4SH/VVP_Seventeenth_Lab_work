#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, i, j, h;
	double a = 0, b = 0, c = 0, max_p = 0, max_ix, max_iy, max_jx, max_jy, max_hx, max_hy;
	cout << "(N > 2). Введите N: ";
	cin >> n;

	if (n > 2)
	{
		int* x = new int[n];
		int* y = new int[n];

		for (i = 0; i < n; i++)
		{
			cout << endl << "x[" << i + 1 << "] : ";
			cin >> x[i];

			cout << "y[" << i + 1 << "] : ";
			cin >> y[i];
		}

		for (i = 0; i < n - 2; i++)
		{
			for (j = i + 1; j < n - 1; j++)
			{
				for (h = i + 2; h < n; h++)
				{
					a = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
					b = sqrt(pow(x[i] - x[h], 2) + pow(y[i] - y[h], 2));
					c = sqrt(pow(x[j] - x[h], 2) + pow(y[j] - y[h], 2));


					if (a < b + c & b < a + c & c < a + b & a + b + c > max_p)
					{
						max_p = a + b + c;
						max_ix = x[i];
						max_iy = y[i];
						max_jx = x[j];
						max_jy = y[j];
						max_hx = x[h];
						max_hy = y[h];
					}
				}
			}
		}

		cout << "Периметр наибольшего треугольника: " << max_p << endl;
		cout << "Первая образующая (точка): (" << max_ix << ", " << max_iy << ")" << endl;
		cout << "Вторая образующая (точка): (" << max_jx << ", " << max_jy << ")" << endl;
		cout << "Третья образующая (точка): (" << max_hx << ", " << max_hy << ")" << endl;
	}
	else
	{
		cout <<"N по условию больше 2. Введите значение N еще раз, следуя условиям." << endl;
	}

	system("pause");
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, max = 0, max_x = 0, max_y = 0;
	cout << "Введите n: ";
	cin >> n;

	int* x = new int[n];
	int* y = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << endl << "x[" << i + 1 << "] : ";
		cin >> x[i];

		cout << "y[" << i + 1 << "] : ";
		cin >> y[i];

		if (x[i] < 0 & y[i] > 0 & sqrt(x[i] * x[i] + y[i] * y[i]) > max)
		{
			max = sqrt(x[i] * x[i] + y[i] * y[i]);
			max_x = x[i];
			max_y = y[i];
		}
	}
	cout << "Самая удалённая от начала координат точка во 2-ой четверти имеет координаты (" << max_x << ";" << max_y << ")" << endl;

	system("pause");
	return 0;
}

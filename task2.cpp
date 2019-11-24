#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j = 0, n, count = 1, cb = 0, l;

	cout << "(L > 0). Введите значение L: ";
	cin >> l;

	if (l > 0)
	{
		cout << "Введите размерность массива: ";
		cin >> n;

		if (n >= 0)
		{
			int* a = new int[n];
			int *rewrtd = new int[n];
			double *buff = new double[n];

			cout << endl << "Введите элементы массива" << endl << endl;
			cout << "a[0] : ";
			cin >> a[0];
			int cur_el = a[0];

			for (i = 1; i < n; i++)
			{
				cout << "a[" << i << "] : ";
				cin >> a[i];
				if (cur_el == a[i])
				{
					count++;
					//			cout << endl << "Совпадение с предыдущим элементом!" << endl;
				}
				else
				{
					if (count > l)
					{
						buff[i - 1] = 0.1;
						for (j = 2; j <= count; j++)
						{
							buff[i - j] = 1;
							//					cout << endl << "Буффер обновлен!" << endl;
						}
						cb += count - 1;
					}
					//			cout << endl << "Похожих элементов: "  << count << endl;
					count = 1;
				}
				cur_el = a[i];
			}
			if (count > l)
			{
				buff[i - 1] = 0.1;
				for (j = 2; j <= count; j++)
				{
					buff[i - j] = 1;
					//			cout << "Буффер обновлен!" << endl;
				}
				cb += count - 1;
			}

			for (i = 0; i < n; i++)
			{
				//		cout << "Буффер[" << i << "] = " << buff[i] << endl;
			}

			j = 0;

			for (i = 0; i < n; i++)
			{
				if (buff[i] == 0.1)
				{
					rewrtd[j] = 0;
					j++;
					//		cout << endl << "Присоение нулю в элементе: " << i << endl;
				}

				else if (buff[i] == 1)
				{
					cout /*<< endl << "Серия пропущена (Длина меньше значения L)"*/ << endl;
				}
				else
				{
					rewrtd[j] = a[i];
					j++;
					//cout << endl << "Перезаписывание" << endl;
				}
			}

			cout << endl << "Перезаписанный массив" << endl << endl;
			for (i = 0; i < n - cb; i++)
			{
				cout << "n[" << i << "] : " << rewrtd[i] << endl << endl;
			}

		}
		else
		{
			cout << endl << "Размерность массива может быть только положительной. Введите размерность еще раз, следуя условиям." << endl << endl;
		}
	}
	else
	{
		cout << "L по условию больше нуля. Введите значение L, еще раз, следуя условию." << endl << endl;
	}

	system("pause");
	return 0;
}

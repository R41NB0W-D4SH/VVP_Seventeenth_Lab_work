#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, k, j = 0, streak = 1, ind = 0, cnst = 0;

	cout << "(K > 0). Введите K : ";
	cin >> k;

	if (k > 0)
	{
		cout << "Введите n: ";
		cin >> n;

		if (n >= 0)
		{
			int* a = new int[n];

			cout << endl << "a[0] : ";
			cin >> a[0];
			int cur_el = a[0];
			for (i = 1; i < n; i++)
			{
				cout << endl << "a[" << i << "] : ";
				cin >> a[i];
			}

			int* buff = new int[n];
			int* rewrtd = new int[n];

			for (i = 1; i < n; i++)
			{
				if (cur_el != a[i])
				{
					buff[i - 1] = streak;
					streak++;
				}
				else buff[i - 1] = streak;
				cur_el = a[i];
			}
			buff[n - 1] = streak;
			cur_el = 0;

			for (i = 0; i < n; i++)
			{
				if (k == buff[i])
				{
					ind = i;
					for (j = 0; j < n; j++)
					{
						if (buff[j] == streak)
						{
							rewrtd[i + cur_el] = a[j];
							cur_el++;
						}
					}
					break;
				}
				else
				{
					rewrtd[i] = a[i];
				}
			}

			j = 0;
			for (i = ind; i < n; i++)
			{
				if (buff[i] == k)
				{
					j++;
				}
				else
				{
					break;
				}
			}

			for (i = ind + cur_el; i < n - j; i++)
			{
				rewrtd[i] = a[ind + j + cnst];
				cnst++;
			}

			for (cur_el = ind; cur_el < ind + j; cur_el++, i++)
			{
				rewrtd[i] = a[cur_el];
			}

			cout << endl;

			for (i = 0; i < n; i++)
			{
				cout << "n[" << i << "] : " << rewrtd[i] << endl;
			}

		}
	}
	system("pause");
	return 0;
}

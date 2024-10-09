#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	setlocale(LC_ALL, "RU");
	int arr_one[size], arr_two[size];
	int pm = 0, vm = 0;
	cout << "Введите 5 элементов первого массива" << endl;
	for (short i = 0; i < size; i++)
	{
		cin >> arr_one[i];
		if (arr_one[i] < 0)
		{
			pm++;
		}
	}
	for (short j = 0; j < pm; j++)
	{
		for (short i = (size - 2); i >= 0; i--)
		{
			if (arr_one[i] < 0)
			{
				swap(arr_one[i], arr_one[i + 1]);
			}
		}
	}
	cout << "Введите 5 элементов второго массива" << endl;
	for (short i = 0; i < size; i++)
	{
		cin >> arr_two[i];
		if (arr_two[i] > 0)
		{
			vm++;
		}
	}
	for (short j = 0; j < vm; j++)
	{
		for (short i = (size - 2); i >= 0; i--)
		{
			if (arr_two[i] > 0)
			{
				swap(arr_two[i], arr_two[i + 1]);
			}
		}
	}
	if (vm >= pm)
	{
		for (short i = (size - 1); i > (size - vm - 1); i--)
		{
			if ((arr_two[i] > 0) && (arr_one[i] < 0))
			{
				swap(arr_two[i], arr_one[i]);
			}
			else
			{
				arr_two[i] = 0;
			}
		}
		for (short j = 1; j < vm; j++)
		{
			for (short i = 0; i < size - 1; i++)
			{
				if (arr_two[i] == 0)
				{
					swap(arr_two[i], arr_two[i + 1]);
				}
			}
		}
	}
	else
	{
		for (short i = (size - 1); i > (size - pm - 1); i--)
		{
			if ((arr_two[i] > 0) && (arr_one[i] < 0))
			{
				swap(arr_two[i], arr_one[i]);
			}
			else
			{
				arr_one[i] = 0;
			}
		}
		for (short j = 1; j < pm; j++)
		{
			for (short i = 0; i < size - 1; i++)
			{
				if (arr_one[i] == 0)
				{
					swap(arr_one[i], arr_one[i + 1]);
				}
			}
		}
	}

	cout << "Положительный массив" << endl;
	for (short i = 0; i < size; i++)
	{
		cout << arr_one[i] << " ";
	}
	cout << endl;

	cout << "Отрицательный  массив" << endl;
	for (short i = 0; i < size; i++)
	{
		cout << arr_two[i] << " ";
	}

	return 0;
}
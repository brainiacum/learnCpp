#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int breakpoint = 0;
	int inputvalue;
	vector<int> vec;
	cout << "Введите числа. Для окончания введите 0\n";
	while (!cin.fail())
	{
		cin >> inputvalue;
		if (inputvalue == breakpoint)
		{
			break;
		}
		else
		{
			vec.push_back(inputvalue);
		}
	}
	cout << "Элементы вектора: \n";
	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << "\n";
	}
	
	if (vec.back() == 1)
	{
		cout << "Последний элемент вектора равен 1. Все элементы вектора, кратные 2 будут удалены. \n";
		for (int i = 0; i < vec.size(); ++i)
		{
			if (vec[i]%2 == 0)
			{
				vec.erase (vec.begin()+i);
			}
		}
	}
	else if (vec.back() == 2)
	{
		cout << "Последний элемент вектора равен 2. Все элементы вектора, кратные 3 будут изменены (к ним будут добавлены 111).\n";
		for (int i = 0; i < vec.size(); ++i)
		{
			if (vec[i]%3 == 0)
			{
				vec.insert(vec.begin()+i, 111);
				i++;
			}
		}
	}
	cout << "Изменения в соответствии с последним элементом произведены. \n";
	cout << "Оставшиеся элементы: \n";
	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << "\n";
	}
	return 0;
}

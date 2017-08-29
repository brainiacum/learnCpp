#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	cout << "Введите размер вектора\n";
	int vecsize;
	cin >> vecsize;
	if (cin.fail())
	{
		cout << "Введено нецелочисленное значение.\n";
		return 0;
	}
	else if (vecsize <= 0)
	{
		do
		{		
			cout << "Размер вектора должен быть положителен. Введите значение заново.\n";
			cin >> vecsize;
		}
		while (vecsize <= 0);
	}
	vector<int> v1;
	cout << "Коллекция чисел: \n";
	for(int i = 0; i < vecsize; i++)
	{
		int value = (vecsize - i) * 3;
		v1.push_back(value);
		cout << i + 1 << "е число " << v1.back() << "\n";
	}
	cout << "Размер вектора: " << v1.size() << "\n";


	for (int j = 0; j < vecsize; j++)
	{
		int posit = j;
		int temp = v1.at(posit);
		for (int k = j+1; k < vecsize; k++)
		{
			if(v1.at(k) < temp)
			{
				posit = k;
				temp = v1.at(k);
			}
		}
		std :: swap (v1.at(posit), v1.at(j));
		v1.at(j) = temp;
	}	

	cout << "Сортировка\n";
	for (int p=0; p < v1.size(); p++)
	{
		cout << v1.at(p) << "\n";	
	}
	return 0;
}

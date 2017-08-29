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
	for(int counter = 0, i = 0; i < vecsize; counter++, i++)
	{
		v1.push_back((vecsize-counter)*2);
		cout << ++counter << "е число " << v1.back() << "\n";
	}
	cout << "Размер вектора: " << v1.size() << "\n";


	for (int j = 0; j < vecsize; j++)
	{
		int posit = j;
		int temp = v1[posit];
		for (int k = j+1; k < vecsize; k++)
		{
			if(v1[k] < temp)
			{
				posit = k;
				temp = v1[k];
			}
		}
		std :: swap (v1[posit], v1[j]);
		v1[j] = temp;
	}	

	cout << "Сортировка\n";
	for (int p=0; p < v1.size(); p++)
	{
		cout << v1[p] << "\n";	
	}
	return 0;
}

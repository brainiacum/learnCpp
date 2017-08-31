#include <iostream>
#include <vector>

int main()
{
	std::cout << "Введите размер вектора\n";
	int vecsize;
	std::cin >> vecsize;
	if (std::cin.fail())
	{
		std::cout << "Введено нецелочисленное значение.\n";
		return 0;
	}
	else if (vecsize <= 0)
	{
		do
		{		
			std::cout << "Размер вектора должен быть положителен. Введите значение заново.\n";
			std::cin >> vecsize;
		}
		while (vecsize <= 0);
	}
	std::vector<int> v1;
	std::cout << "Коллекция чисел: \n";
	for(unsigned int i = 0; i < vecsize; i++)
	{
		int j = i;
		int value = (vecsize - i) * 2;
		v1.push_back(value);
		std::cout << ++j << "е число " << v1.back() << "\n";
	}
	std::cout << "Размер вектора: " << v1.size() << "\n";


	for (int j = 0; j < vecsize; j++)
	{
		int posit = j;
		for (int k = j+1; k < vecsize; k++)
		{
			if(v1[k] < v1[posit])
			{
				posit = k;
				v1[posit] = v1[k];
			}
		}
		std::swap (v1[posit], v1[j]);
	}	

	std::cout << "Сортировка\n";
	for (int p=0; p < v1.size(); p++)
	{
		std::cout << v1[p] << "\n";	
	}
	return 0;
}

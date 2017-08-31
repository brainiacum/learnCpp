#include <iostream>
#include <vector>

int main()
{
	std::cout << "Введите размер вектора\n";
	int vecsize;
	std::cin >> vecsize;
	if (std::cin.fail())
	{
		std::cout << "Введено недопустимое значение.\n";
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
	for(int i = 0; i < vecsize; ++i)
	{
		int value = (vecsize - i) * 3;
		v1.push_back(value);
		std::cout << i + 1 << "е число " << v1.back() << "\n";
	}

	for (int j = 0; j < vecsize; ++j)
	{
		int posit = j;
		for (int k = j+1; k < vecsize; ++k)
		{
			if(v1.at(k) < v1.at(posit))
			{
				posit = k;
				v1.at(posit) = v1.at(k);
			}
		}
		std::swap (v1.at(posit), v1.at(j));
	}	

	std::cout << "Сортировка\n";
	for (int p=0; p < v1.size(); ++p)
	{
		std::cout << v1.at(p) << "\n";	
	}
	return 0;
}

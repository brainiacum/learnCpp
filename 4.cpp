#include <iostream>
#include <vector>
#include <cstdlib>

double dRand(double min, double max)
{
	return min + (rand() % static_cast<unsigned int>((max - min) * 1000)) / 1000.;
}
void fillRandom(double * array, int size)
{
	double min = -1.0;
	double max = 1.0; 
	for (int i = 0; i < size; i++)
	{
		double input = dRand(min, max);
		array[i] = input;
	}
}

void sortByGrow(double * array, int size)
{
	for (int j = 0; j < size; j++)
	{
		int posit = j;
		for (int k = j+1; k < size; k++)
		{
			if(array[k] < array[posit])
			{
				posit = k;
				array[posit] = array[k];
			}
		}
		std::swap (array[posit], array[j]);
	}	
}

void printVector(double * array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << "\n";
	}
}

int main()
{	
	std::vector<double> v1(5);

	fillRandom(v1.data(), v1.size());	
	
	std::cout << "Вектор 1 заполнен числами: \n";
	
	printVector(v1.data(), v1.size());
	
	sortByGrow(v1.data(), v1.size());	
	
	std::cout << "Отсортированный вектор 1: \n";
	
	printVector(v1.data(), v1.size());


	std::vector<double> v2(10);
	
	fillRandom(v2.data(), v2.size());
	
	std::cout << "Вектор 2 заполнен числами: \n";
	
	printVector(v2.data(), v2.size());
	
	sortByGrow(v2.data(), v2.size());
	
	std::cout << "Отсортированный вектор 2: \n";
	
	printVector(v2.data(), v2.size());	

	
	std::vector<double> v3(25);
	
	fillRandom(v3.data(), v3.size());
	
	std::cout << "Вектор 3 заполнен числами: \n";
	
	printVector(v3.data(), v3.size());
	
	sortByGrow(v3.data(), v3.size());
	
	std::cout << "Отсортированный вектор 3: \n";
	
	printVector(v3.data(), v3.size());


	std::vector<double> v4(50);

	fillRandom(v4.data(), v4.size());

	std::cout << "Вектор 4 заполнен числами: \n";


	printVector(v4.data(), v4.size());

	sortByGrow(v4.data(), v4.size());

	std::cout << "Отсортированный вектор 4: \n";

	printVector(v4.data(), v4.size());

	
	std::vector<double> v5(100);

	fillRandom(v5.data(), v5.size());

	std::cout << "Вектор 5 заполнен числами: \n";

	printVector(v5.data(), v5.size());

	sortByGrow(v5.data(), v5.size());

	std::cout << "Отсортированный вектор 5: \n";

	printVector(v5.data(), v5.size());
	
	return 0;
}

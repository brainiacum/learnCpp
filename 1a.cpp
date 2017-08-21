#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	cout<<"Введите размер вектора\n";
	int vecsize;
	cin>> vecsize;
	vector<int> v1(vecsize);
	cout <<"Размер вектора: " <<v1.size()<<"\n";
	cout <<"Коллекция чисел: \n";
	int counter=0;
	for(int i=0; i<vecsize; i++)
	{
		v1.push_back((vecsize-counter)*2);		
		cout<<counter+1<<"е число "<<v1.back()<<"\n";
		counter=counter+1;
	}
	for (int j=vecsize;j<vecsize*2;j++)
	{
		int posit=j;
		int temp=v1[posit];
		for (int k=j+1;k<vecsize*2;k++)
		{
			if(v1[k]<temp)
			{
				posit=k;
				temp=v1[k];
			}
		}
		v1[posit]=v1[j];
		v1[j] = temp;
	}

	cout <<"Сортировка завершена\n";
	for (int p=vecsize;p<vecsize*2;p++)
	{
		cout << "v1[p]: "<<v1[p]<<"\n";	
	}
	return 0;
}

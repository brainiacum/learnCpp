#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	cout<<"Введите размер вектора\n";
	int vecsize;
	cin>> vecsize;
	vector<int> v1(vecsize);
	cout <<"Размер вектора: " <<vecsize<<"\n";
	cout <<"Коллекция чисел: \n";
	int counter=0;
	for(int i=0; i<vecsize; i++)
	{
		v1.push_back((vecsize-counter)*3);		
		cout<<counter+1<<"е число "<<v1.back()<<"\n";
		counter=counter+1;
	}
	for (int j=vecsize;j<vecsize*2;j++)
	{
		int posit=j;
		int temp=v1.at(posit);
		for (int k=j+1;k<vecsize*2;k++)
		{
			if(v1[k]<temp)
			{
				posit=k;
				temp=v1.at(k);
			}
		}
		v1.at(posit)=v1.at(j);
		v1.at(j) = temp;
	}	
	cout <<"Сортировка\n";
	for (int p=vecsize;p<vecsize*2;p++)
	{
		cout << v1[p]<<"\n";	
	}
	return 0;
}

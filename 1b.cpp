#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	vector<int> v1(5);
	cout <<"Размер вектора: " <<v1.size()<<"\n";
	cout <<"Коллекция чисел: \n";
	int i;
	for(i=4; i>=0; i--)
	{
		int c=0;
		v1[i]=i*3;		
		cout<<c+1<<"е число "<<v1[i]<<"\n";
		c=c+1;
	}
	cout <<"Сортировка\n";
	for (int j=0;j<v1.size();j++)
	{
		int posit=j;
		int temp=v1.at(posit);
		for (int k=j+1;k<v1.size();k++)
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
	for (int p=0;p<v1.size();p++)
	{
		cout << v1[p]<<"\n";	
	}
	return 0;
}